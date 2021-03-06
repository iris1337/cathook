/*
 * interfaces.h
 *
 *  Created on: Oct 3, 2016
 *      Author: nullifiedcat
 */

#ifndef INTERFACES_H_
#define INTERFACES_H_

#include "beforecheaders.h"
#include <string>
#include "aftercheaders.h"

#include "sharedobj.h"

namespace vgui {
class ISurface;
class IPanel;
}

class ISteamClient;
class ISteamFriends;
class IVEngineClient013;
class IClientEntityList;
class ICenterPrint;
class ICvar;
class IGameEventManager2;
class IBaseClientDLL;
class ClientModeShared;
class IEngineTrace;
class IVModelInfoClient;
class IInputSystem;
class IClient;
class CGlobalVarsBase;
class IPrediction;
class IGameMovement;
class IInput;
class IMatSystemSurface;
class ISteamUser;
class IAchievementMgr;
class ISteamUserStats;
class IStudioRender;
class IVDebugOverlay;

extern ISteamClient* g_ISteamClient;
extern ISteamFriends* g_ISteamFriends;
extern IVEngineClient013* g_IEngine;
extern vgui::ISurface* g_ISurface;
extern vgui::IPanel* g_IPanel;
extern IClientEntityList* g_IEntityList;
extern ICenterPrint* g_ICenterPrint;
extern ICvar* g_ICvar;
extern IGameEventManager2* g_IEventManager2;
extern IBaseClientDLL* g_IBaseClient;
extern IEngineTrace* g_ITrace;
extern IVModelInfoClient* g_IModelInfo;
extern IInputSystem* g_IInputSystem;
extern CGlobalVarsBase* g_GlobalVars;
extern IPrediction* g_IPrediction;
extern IGameMovement* g_IGameMovement;
extern IInput* g_IInput;
extern IMatSystemSurface* g_IMatSystemSurface;
extern ISteamUser* g_ISteamUser;
extern IAchievementMgr* g_IAchievementMgr;
extern ISteamUserStats* g_ISteamUserStats;
extern IStudioRender* g_IStudioRender;
extern IVDebugOverlay* g_IVDebugOverlay;

template<typename T>
T* BruteforceInterface(std::string name, sharedobj::SharedObject* object, int start = 0);

void CreateInterfaces();

#endif /* INTERFACES_H_ */
