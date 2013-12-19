#include "addr.hpp"
#include "LibM2.hpp"
void __attribute__ ((constructor)) lib_main(void);

void lib_main(){
    if (!libm2::LibM2::isRightRev()){
        std::cout << "LibM2 is not compatible to this game revision!" << std::endl;
        abort();
    }
    std::cout << std::endl << "****************** Starting LibM2 ******************" << std::endl;
    std::cout << "**** Made by iMer (www.imer.cc).\n**** Special Thanks to Nova, tim66613 and everyone else who helped" << std::endl;
    std::cout << "**** Game Revision is " << Revision << std::endl;
    libm2::LibM2::removePRELOAD();
    try{
        libm2::LibM2::instance();
    } catch(MologieDetours::DetourException &e) {
        std::cout << std::endl << "Error when hooking function: " << e.what() << std::endl << std::endl;
        abort();
    }
    // test
    std::cout << "**** Done initializing!" << std::endl;
}
