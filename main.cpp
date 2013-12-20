#include "LibM2.hpp"
#include "addr.hpp"
#include "lib/hook.hpp"
void __attribute__ ((constructor)) lib_main(void);
using namespace libm2;
MologieDetours::Detour<int (*)(int, char **)>* detour_main; 
int game_main(int argc, char** argv){
    if (!LibM2::isRightRevision()){
        std::cout << "LibM2 is not compatible to this game revision!" << std::endl;
        abort();
    }
    std::cout << std::endl << "****************** Starting LibM2 ******************" << std::endl;
    std::cout << "**** Made by iMer (www.imer.cc).\n**** Special Thanks to Nova, tim66613 and everyone else who helped" << std::endl;
    std::cout << "**** Game Revision is " << LibM2::getRevision() << std::endl;
    LibM2::removePRELOAD();
    try{
        LibM2::instance()->loadPlugins();
    } catch(MologieDetours::DetourException &e) {
        std::cout << std::endl << "Error when hooking function: " << e.what() << std::endl << std::endl;
        abort();
    }
    std::cout << "**** Done initializing!" << std::endl;
    return detour_main->GetOriginalFunction()(argc, argv);
}
void lib_main(){
    detour_main = simpleHook<int (*)(int, char **)>((int)Addr::misc::main,game_main); 
}
