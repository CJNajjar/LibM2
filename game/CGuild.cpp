/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CGuild.hpp"
#include "../addr.hpp"
namespace libm2 {

    void CGuild::AddComment(LPCHARACTER ch, const std::string & str) {
        ((void(*)(CGuild * const, LPCHARACTER, const std::string &))Addr::CGuild::AddComment__LPCHARACTER_const_std_locale_string_)(this, ch, str);
    }

    void CGuild::AddMember(TPacketDGGuildMember * p) {
        ((void(*)(CGuild * const, TPacketDGGuildMember *))Addr::CGuild::AddMember__TPacketDGGuildMember_)(this, p);
    }

    void CGuild::BroadcastMemberCountBonus() {
        ((void(*)(CGuild * const))Addr::CGuild::BroadcastMemberCountBonus)(this);
    }

    CGuild::CGuild(TGuildCreateParameter & cp) {
        ((void(*)(CGuild * const, TGuildCreateParameter &))Addr::CGuild::CGuild__TGuildCreateParameter_)(this, cp);
    }

    bool CGuild::CanStartWar(BYTE bGuildWarType) {
        return ((bool(*)(CGuild * const, BYTE))Addr::CGuild::CanStartWar__BYTE)(this, bGuildWarType);
    }

    void CGuild::ChangeGradeAuth(BYTE grade, BYTE auth) {
        ((void(*)(CGuild * const, BYTE, BYTE))Addr::CGuild::ChangeGradeAuth__BYTE_BYTE)(this, grade, auth);
    }

    void CGuild::ChangeGradeName(BYTE grade, const char * grade_name) {
        ((void(*)(CGuild * const, BYTE, const char *))Addr::CGuild::ChangeGradeName__BYTE_const_char_)(this, grade, grade_name);
    }

    void CGuild::ChangeLadderPoint(int iChange) {
        ((void(*)(CGuild * const, int))Addr::CGuild::ChangeLadderPoint__int)(this, iChange);
    }

    bool CGuild::ChangeMasterTo(DWORD dwPID) {
        return ((bool(*)(CGuild * const, DWORD))Addr::CGuild::ChangeMasterTo__DWORD)(this, dwPID);
    }

    void CGuild::ChangeMemberData(DWORD pid, DWORD offer, BYTE level, BYTE grade) {
        ((void(*)(CGuild * const, DWORD, DWORD, BYTE, BYTE))Addr::CGuild::ChangeMemberData__DWORD_DWORD_BYTE_BYTE)(this, pid, offer, level, grade);
    }

    bool CGuild::ChangeMemberGeneral(DWORD pid, BYTE is_general) {
        return ((bool(*)(CGuild * const, DWORD, BYTE))Addr::CGuild::ChangeMemberGeneral__DWORD_BYTE)(this, pid, is_general);
    }

    void CGuild::ChangeMemberGrade(DWORD pid, BYTE grade) {
        ((void(*)(CGuild * const, DWORD, BYTE))Addr::CGuild::ChangeMemberGrade__DWORD_BYTE)(this, pid, grade);
    }

    bool CGuild::ChargeSP(LPCHARACTER ch, int iSP) {
        return ((bool(*)(CGuild * const, LPCHARACTER, int))Addr::CGuild::ChargeSP__LPCHARACTER_int)(this, ch, iSP);
    }

    void CGuild::Chat(const char * c_pszText) {
        ((void(*)(CGuild * const, const char *))Addr::CGuild::Chat__const_char_)(this, c_pszText);
    }

    bool CGuild::CheckStartWar(DWORD dwOppGID) {
        return ((bool(*)(CGuild * const, DWORD))Addr::CGuild::CheckStartWar__DWORD)(this, dwOppGID);
    }

    void CGuild::ComputeGuildPoints() {
        ((void(*)(CGuild * const))Addr::CGuild::ComputeGuildPoints)(this);
    }

    bool CGuild::DeclareWar(DWORD dwOppGID, BYTE type, BYTE state) {
        return ((bool(*)(CGuild * const, DWORD, BYTE, BYTE))Addr::CGuild::DeclareWar__DWORD_BYTE_BYTE)(this, dwOppGID, type, state);
    }

    void CGuild::DeleteComment(LPCHARACTER ch, DWORD comment_id) {
        ((void(*)(CGuild * const, LPCHARACTER, DWORD))Addr::CGuild::DeleteComment__LPCHARACTER_DWORD)(this, ch, comment_id);
    }

    void CGuild::Disband() {
        ((void(*)(CGuild * const))Addr::CGuild::Disband)(this);
    }

    void CGuild::EndWar(DWORD dwOppGID) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::EndWar__DWORD)(this, dwOppGID);
    }

    DWORD CGuild::GetGuildWarMapIndex(DWORD dwOppGID) {
        return ((DWORD(*)(CGuild * const, DWORD))Addr::CGuild::GetGuildWarMapIndex__DWORD)(this, dwOppGID);
    }

    int CGuild::GetGuildWarState(DWORD dwOppGID) {
        return ((int(*)(CGuild * const, DWORD))Addr::CGuild::GetGuildWarState__DWORD)(this, dwOppGID);
    }

    int CGuild::GetGuildWarType(DWORD dwOppGID) {
        return ((int(*)(CGuild * const, DWORD))Addr::CGuild::GetGuildWarType__DWORD)(this, dwOppGID);
    }

    LPCHARACTER CGuild::GetMasterCharacter() {
        return ((LPCHARACTER(*)(CGuild * const))Addr::CGuild::GetMasterCharacter)(this);
    }

    int CGuild::GetMaxMemberCount() {
        return ((int(*)(CGuild * const))Addr::CGuild::GetMaxMemberCount)(this);
    }

    TGuildMember * CGuild::GetMember(DWORD pid) {
        return ((TGuildMember * (*)(CGuild * const, DWORD))Addr::CGuild::GetMember__DWORD)(this, pid);
    }

    DWORD CGuild::GetMemberPID(const std::string& strName) {
        return ((DWORD(*)(CGuild * const, const std::string))Addr::CGuild::GetMemberPID__const_std_locale_string_)(this, strName);
    }

    int CGuild::GetSkillLevel(DWORD vnum) {
        return ((int(*)(CGuild * const, DWORD))Addr::CGuild::GetSkillLevel__DWORD)(this, vnum);
    }

    int CGuild::GetTotalLevel() const {
        return ((int(*)(const CGuild * const))Addr::CGuild::GetTotalLevel)(this);
    }

    int CGuild::GetWarScoreAgainstTo(DWORD dwOppGID) {
        return ((int(*)(CGuild * const, DWORD))Addr::CGuild::GetWarScoreAgainstTo__DWORD)(this, dwOppGID);
    }

    DWORD CGuild::GetWarStartTime(DWORD dwOppGID) {
        return ((DWORD(*)(CGuild * const, DWORD))Addr::CGuild::GetWarStartTime__DWORD)(this, dwOppGID);
    }

    void CGuild::GuildPointChange(BYTE type, int amount, bool save) {
        ((void(*)(CGuild * const, BYTE, int, bool))Addr::CGuild::GuildPointChange__BYTE_int_bool)(this, type, amount, save);
    }

    void CGuild::GuildWarEntryAccept(DWORD dwOppGID, LPCHARACTER ch) {
        ((void(*)(CGuild * const, DWORD, LPCHARACTER))Addr::CGuild::GuildWarEntryAccept__DWORD_LPCHARACTER)(this, dwOppGID, ch);
    }

    void CGuild::GuildWarEntryAsk(DWORD dwOppGID) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::GuildWarEntryAsk__DWORD)(this, dwOppGID);
    }

    void CGuild::GuildWarPacket(DWORD dwOppGID, BYTE bWarType, BYTE bWarState) {
        ((void(*)(CGuild * const, DWORD, BYTE, BYTE))Addr::CGuild::GuildWarPacket__DWORD_BYTE_BYTE)(this, dwOppGID, bWarType, bWarState);
    }

    bool CGuild::HasLand() {
        return ((bool(*)(CGuild * const))Addr::CGuild::HasLand)(this);
    }

    void CGuild::Initialize() {
        ((void(*)(CGuild * const))Addr::CGuild::Initialize)(this);
    }

    void CGuild::Invite(LPCHARACTER pchInviter, LPCHARACTER pchInvitee) {
        ((void(*)(CGuild * const, LPCHARACTER, LPCHARACTER))Addr::CGuild::Invite__LPCHARACTER_LPCHARACTER)(this, pchInviter, pchInvitee);
    }

    void CGuild::InviteAccept(LPCHARACTER pchInvitee) {
        ((void(*)(CGuild * const, LPCHARACTER))Addr::CGuild::InviteAccept__LPCHARACTER)(this, pchInvitee);
    }

    void CGuild::InviteDeny(DWORD dwPID) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::InviteDeny__DWORD)(this, dwPID);
    }

    void CGuild::LevelChange(DWORD pid, BYTE level) {
        ((void(*)(CGuild * const, DWORD, BYTE))Addr::CGuild::LevelChange__DWORD_BYTE)(this, pid, level);
    }

    void CGuild::Load(DWORD guild_id) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::Load__DWORD)(this, guild_id);
    }

    void CGuild::LoadGuildData(SQLMsg * a1) {
        ((void(*)(CGuild * const, SQLMsg *))Addr::CGuild::LoadGuildData__SQLMsg_)(this, a1);
    }

    void CGuild::LoadGuildGradeData(SQLMsg * pmsg) {
        ((void(*)(CGuild * const, SQLMsg *))Addr::CGuild::LoadGuildGradeData__SQLMsg_)(this, pmsg);
    }

    void CGuild::LoadGuildMemberData(SQLMsg * pmsg) {
        ((void(*)(CGuild * const, SQLMsg *))Addr::CGuild::LoadGuildMemberData__SQLMsg_)(this, pmsg);
    }

    void CGuild::LoginMember(LPCHARACTER ch) {
        ((void(*)(CGuild * const, LPCHARACTER))Addr::CGuild::LoginMember__LPCHARACTER)(this, ch);
    }

    void CGuild::LogoutMember(LPCHARACTER ch) {
        ((void(*)(CGuild * const, LPCHARACTER))Addr::CGuild::LogoutMember__LPCHARACTER)(this, ch);
    }

    void CGuild::NotifyGuildMaster(const char * msg) {
        ((void(*)(CGuild * const, const char *))Addr::CGuild::NotifyGuildMaster__const_char_)(this, msg);
    }

    bool CGuild::OfferExp(LPCHARACTER ch, int amount) {
        return ((bool(*)(CGuild * const, LPCHARACTER, int))Addr::CGuild::OfferExp__LPCHARACTER_int)(this, ch, amount);
    }

    void CGuild::P2PChangeGrade(BYTE grade) {
        ((void(*)(CGuild * const, BYTE))Addr::CGuild::P2PChangeGrade__BYTE)(this, grade);
    }

    void CGuild::P2PChat(const char * c_pszText) {
        ((void(*)(CGuild * const, const char *))Addr::CGuild::P2PChat__const_char_)(this, c_pszText);
    }

    void CGuild::P2PLoginMember(DWORD pid) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::P2PLoginMember__DWORD)(this, pid);
    }

    void CGuild::P2PLogoutMember(DWORD pid) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::P2PLogoutMember__DWORD)(this, pid);
    }

    void CGuild::Packet(const void * buf, int size) {
        ((void(*)(CGuild * const, const void *, int))Addr::CGuild::Packet__const_void__int)(this, buf, size);
    }

    void CGuild::RecvMoneyChange(int iGold) {
        ((void(*)(CGuild * const, int))Addr::CGuild::RecvMoneyChange__int)(this, iGold);
    }

    void CGuild::RecvWithdrawMoneyGive(int iChangeGold) {
        ((void(*)(CGuild * const, int))Addr::CGuild::RecvWithdrawMoneyGive__int)(this, iChangeGold);
    }

    void CGuild::RefreshComment(LPCHARACTER ch) {
        ((void(*)(CGuild * const, LPCHARACTER))Addr::CGuild::RefreshComment__LPCHARACTER)(this, ch);
    }

    void CGuild::RefreshCommentForce(DWORD player_id) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::RefreshCommentForce__DWORD)(this, player_id);
    }

    void CGuild::RefuseWar(DWORD dwOppGID) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::RefuseWar__DWORD)(this, dwOppGID);
    }

    bool CGuild::RemoveMember(DWORD pid) {
        return ((bool(*)(CGuild * const, DWORD))Addr::CGuild::RemoveMember__DWORD)(this, pid);
    }

    void CGuild::RequestAddMember(LPCHARACTER ch, int grade) {
        ((void(*)(CGuild * const, LPCHARACTER, int))Addr::CGuild::RequestAddMember__LPCHARACTER_int)(this, ch, grade);
    }

    void CGuild::RequestDeclareWar(DWORD dwOppGID, BYTE type) {
        ((void(*)(CGuild * const, DWORD, BYTE))Addr::CGuild::RequestDeclareWar__DWORD_BYTE)(this, dwOppGID, type);
    }

    void CGuild::RequestDepositMoney(LPCHARACTER ch, int iGold) {
        ((void(*)(CGuild * const, LPCHARACTER, int))Addr::CGuild::RequestDepositMoney__LPCHARACTER_int)(this, ch, iGold);
    }

    void CGuild::RequestDisband(DWORD pid) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::RequestDisband__DWORD)(this, pid);
    }

    void CGuild::RequestRefuseWar(DWORD dwOppGID) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::RequestRefuseWar__DWORD)(this, dwOppGID);
    }

    bool CGuild::RequestRemoveMember(DWORD pid) {
        return ((bool(*)(CGuild * const, DWORD))Addr::CGuild::RequestRemoveMember__DWORD)(this, pid);
    }

    void CGuild::RequestWithdrawMoney(LPCHARACTER ch, int iGold) {
        ((void(*)(CGuild * const, LPCHARACTER, int))Addr::CGuild::RequestWithdrawMoney__LPCHARACTER_int)(this, ch, iGold);
    }

    void CGuild::ReserveWar(DWORD dwOppGID, BYTE type) {
        ((void(*)(CGuild * const, DWORD, BYTE))Addr::CGuild::ReserveWar__DWORD_BYTE)(this, dwOppGID, type);
    }

    void CGuild::SaveLevel() {
        ((void(*)(CGuild * const))Addr::CGuild::SaveLevel)(this);
    }

    void CGuild::SaveMember(DWORD pid) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::SaveMember__DWORD)(this, pid);
    }

    void CGuild::SaveSkill() {
        ((void(*)(CGuild * const))Addr::CGuild::SaveSkill)(this);
    }

    void CGuild::SendAllGradePacket(LPCHARACTER ch) {
        ((void(*)(CGuild * const, LPCHARACTER))Addr::CGuild::SendAllGradePacket__LPCHARACTER)(this, ch);
    }

    void CGuild::SendDBSkillUpdate(int amount) {
        ((void(*)(CGuild * const, int))Addr::CGuild::SendDBSkillUpdate__int)(this, amount);
    }

    void CGuild::SendEnemyGuild(LPCHARACTER ch) {
        ((void(*)(CGuild * const, LPCHARACTER))Addr::CGuild::SendEnemyGuild__LPCHARACTER)(this, ch);
    }

    void CGuild::SendGuildDataUpdateToAllMember(SQLMsg * pmsg) {
        ((void(*)(CGuild * const, SQLMsg *))Addr::CGuild::SendGuildDataUpdateToAllMember__SQLMsg_)(this, pmsg);
    }

    void CGuild::SendGuildInfoPacket(LPCHARACTER ch) {
        ((void(*)(CGuild * const, LPCHARACTER))Addr::CGuild::SendGuildInfoPacket__LPCHARACTER)(this, ch);
    }

    void CGuild::SendListOneToAll(LPCHARACTER ch) {
        ((void(*)(CGuild * const, LPCHARACTER))Addr::CGuild::SendListOneToAll__LPCHARACTER)(this, ch);
    }

    void CGuild::SendListOneToAll(DWORD pid) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::SendListOneToAll__DWORD)(this, pid);
    }

    void CGuild::SendListPacket(LPCHARACTER ch) {
        ((void(*)(CGuild * const, LPCHARACTER))Addr::CGuild::SendListPacket__LPCHARACTER)(this, ch);
    }

    void CGuild::SendLoginPacket(LPCHARACTER ch, LPCHARACTER chLogin) {
        ((void(*)(CGuild * const, LPCHARACTER, LPCHARACTER))Addr::CGuild::SendLoginPacket__LPCHARACTER_LPCHARACTER)(this, ch, chLogin);
    }

    void CGuild::SendLoginPacket(LPCHARACTER ch, DWORD pid) {
        ((void(*)(CGuild * const, LPCHARACTER, DWORD))Addr::CGuild::SendLoginPacket__LPCHARACTER_DWORD)(this, ch, pid);
    }

    void CGuild::SendLogoutPacket(LPCHARACTER ch, LPCHARACTER chLogout) {
        ((void(*)(CGuild * const, LPCHARACTER, LPCHARACTER))Addr::CGuild::SendLogoutPacket__LPCHARACTER_LPCHARACTER)(this, ch, chLogout);
    }

    void CGuild::SendLogoutPacket(LPCHARACTER ch, DWORD pid) {
        ((void(*)(CGuild * const, LPCHARACTER, DWORD))Addr::CGuild::SendLogoutPacket__LPCHARACTER_DWORD)(this, ch, pid);
    }

    void CGuild::SendOnlineRemoveOnePacket(DWORD pid) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::SendOnlineRemoveOnePacket__DWORD)(this, pid);
    }

    void CGuild::SendSkillInfoPacket(LPCHARACTER ch) const {
        ((void(*)(const CGuild * const, LPCHARACTER))Addr::CGuild::SendSkillInfoPacket__LPCHARACTER)(this, ch);
    }

    void CGuild::SetGuildWarMapIndex(DWORD dwOppGID, long lMapIndex) {
        ((void(*)(CGuild * const, DWORD, long))Addr::CGuild::SetGuildWarMapIndex__DWORD_long)(this, dwOppGID, lMapIndex);
    }

    void CGuild::SetLadderPoint(int point) {
        ((void(*)(CGuild * const, int))Addr::CGuild::SetLadderPoint__int)(this, point);
    }

    void CGuild::SetMemberCountBonus(int iBonus) {
        ((void(*)(CGuild * const, int))Addr::CGuild::SetMemberCountBonus__int)(this, iBonus);
    }

    void CGuild::SetWarScoreAgainstTo(DWORD dwOppGID, int iScore) {
        ((void(*)(CGuild * const, DWORD, int))Addr::CGuild::SetWarScoreAgainstTo__DWORD_int)(this, dwOppGID, iScore);
    }

    void CGuild::SkillLevelUp(DWORD dwVnum) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::SkillLevelUp__DWORD)(this, dwVnum);
    }

    void CGuild::SkillRecharge() {
        ((void(*)(CGuild * const))Addr::CGuild::SkillRecharge)(this);
    }

    void CGuild::SkillUsableChange(DWORD dwSkillVnum, bool bUsable) {
        ((void(*)(CGuild * const, DWORD, bool))Addr::CGuild::SkillUsableChange__DWORD_bool)(this, dwSkillVnum, bUsable);
    }

    void CGuild::StartWar(DWORD dwOppGID) {
        ((void(*)(CGuild * const, DWORD))Addr::CGuild::StartWar__DWORD)(this, dwOppGID);
    }

    DWORD CGuild::UnderAnyWar(BYTE bType) {
        return ((DWORD(*)(CGuild * const, BYTE))Addr::CGuild::UnderAnyWar__BYTE)(this, bType);
    }

    bool CGuild::UnderWar(DWORD dwOppGID) {
        return ((bool(*)(CGuild * const, DWORD))Addr::CGuild::UnderWar__DWORD)(this, dwOppGID);
    }

    void CGuild::UpdateSkill(BYTE skill_point, BYTE * skill_levels) {
        ((void(*)(CGuild * const, BYTE, BYTE *))Addr::CGuild::UpdateSkill__BYTE_BYTE_)(this, skill_point, skill_levels);
    }

    void CGuild::UseSkill(DWORD dwVnum, LPCHARACTER ch, DWORD pid) {
        ((void(*)(CGuild * const, DWORD, LPCHARACTER, DWORD))Addr::CGuild::UseSkill__DWORD_LPCHARACTER_DWORD)(this, dwVnum, ch, pid);
    }

    CGuild::GuildJoinErrCode CGuild::VerifyGuildJoinableCondition(const LPCHARACTER pchInvitee) {
        return ((CGuild::GuildJoinErrCode(*)(CGuild * const, const LPCHARACTER))Addr::CGuild::VerifyGuildJoinableCondition__const_LPCHARACTER)(this, pchInvitee);
    }

    bool CGuild::WaitStartWar(DWORD dwOppGID) {
        return ((bool(*)(CGuild * const, DWORD))Addr::CGuild::WaitStartWar__DWORD)(this, dwOppGID);
    }

    void CGuild::__P2PUpdateGrade(SQLMsg * pmsg) {
        ((void(*)(CGuild * const, SQLMsg *))Addr::CGuild::__P2PUpdateGrade__SQLMsg_)(this, pmsg);
    }

    CGuild::~CGuild() {
        ((void(*)(CGuild * const))Addr::CGuild::__CGuild)(this);
    }

    DWORD CGuild::GetMasterPID() const {
        return m_data.master_pid;
    }

    const char* CGuild::GetName() const {
        return this->m_data.name;
    }

    DWORD CGuild::GetID() const {
        return this->m_data.guild_id;
    }

    BYTE CGuild::GetLevel() const {
        return this->m_data.level;
    }

    void CGuild::SetLevel(BYTE lvl) {
        this->m_data.level = lvl;
    }
}
