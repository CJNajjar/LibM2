/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CPetActor.hpp"
#include "../addr.hpp"
namespace libm2 {

    void CPetActor::ClearBuff() {
        ((void(*)(CPetActor * const))Addr::CPetActor::ClearBuff)(this);
    }

    bool CPetActor::Follow(float fMinDistance) {
        return ((bool(*)(CPetActor * const, float))Addr::CPetActor::Follow__float)(this, fMinDistance);
    }

    void CPetActor::GiveBuff() {
        ((void(*)(CPetActor * const))Addr::CPetActor::GiveBuff)(this);
    }

    bool CPetActor::Mount() {
        return ((bool(*)(CPetActor * const))Addr::CPetActor::Mount)(this);
    }

    void CPetActor::SetName(const char * name) {
        ((void(*)(CPetActor * const, const char *))Addr::CPetActor::SetName__const_char_)(this, name);
    }

    void CPetActor::SetSummonItem(LPITEM pItem) {
        ((void(*)(CPetActor * const, LPITEM))Addr::CPetActor::SetSummonItem__LPITEM)(this, pItem);
    }

    DWORD CPetActor::Summon(const char * petName, LPITEM pSummonItem, bool bSpawnFar) {
        return ((DWORD(*)(CPetActor * const, const char *, LPITEM, bool))Addr::CPetActor::Summon__const_char__LPITEM_bool)(this, petName, pSummonItem, bSpawnFar);
    }

    void CPetActor::Unmount() {
        ((void(*)(CPetActor * const))Addr::CPetActor::Unmount)(this);
    }

    void CPetActor::Unsummon() {
        ((void(*)(CPetActor * const))Addr::CPetActor::Unsummon)(this);
    }

    bool CPetActor::Update(DWORD deltaTime) {
        return ((bool(*)(CPetActor * const, DWORD))Addr::CPetActor::Update__DWORD)(this, deltaTime);
    }

    bool CPetActor::_UpdatAloneActionAI(float fMinDist, float fMaxDist) {
        return ((bool(*)(CPetActor * const, float, float))Addr::CPetActor::_UpdatAloneActionAI__float_float)(this, fMinDist, fMaxDist);
    }

    bool CPetActor::_UpdateFollowAI() {
        return ((bool(*)(CPetActor * const))Addr::CPetActor::_UpdateFollowAI)(this);
    }
	
    LPCHARACTER CPetActor::GetCharacter() const {
        return this->m_pkChar;
    }

    LPCHARACTER CPetActor::GetOwner() const {
        return this->m_pkOwner;
    }

    DWORD CPetActor::GetVID() const {
        return this->m_dwVID;
    }

    DWORD CPetActor::GetVnum() const {
        return this->m_dwVnum;
    }

    DWORD CPetActor::GetSummonItemVID() {
        return this->m_dwSummonItemVID;
    }

    //bool CPetActor::HasOption(CPetActor::EPetOptions) const {}

    //bool CPetActor::IsSummoned() const {}

    //CPetActor::CPetActor(LPCHARACTER, DWORD, DWORD) {}

    //CPetActor::~CPetActor() {}

} 