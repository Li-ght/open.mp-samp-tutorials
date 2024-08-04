#include <YSI_Coding\y_hooks>

#if !defined _INC_open_mp

    #if !defined PLAYER_STATE
        #define PLAYER_STATE: _:
    #endif

    #if !defined TextDrawColour
        #define TextDrawColour TextDrawColor
    #endif

    #if !defined TextDrawBackgroundColour
        #define TextDrawBackgroundColour TextDrawBackgroundColor
    #endif

    #if !defined WEAPON
        #define WEAPON: _:
    #endif

    #if !defined TEXT_DRAW_FONT_SPRITE_DRAW
        #define TEXT_DRAW_FONT_SPRITE_DRAW 4
    #endif

    #if !defined TEXT_DRAW_FONT_SPRITE_DRAW
        #define TEXT_DRAW_ALIGN_LEFT 1
    #endif

    stock bool:IsPlayerSpawned(playerid)
    {
        switch (GetPlayerState(playerid)) {
            case PLAYER_STATE_ONFOOT .. PLAYER_STATE_PASSENGER,
                PLAYER_STATE_SPAWNED: {
                return true;
            }
        }
        return false;
    }

#endif

static 
    bool:pLiveStreaming[MAX_PLAYERS],
    bool:pLiveStreamWatch[MAX_PLAYERS],
    pLiveStreamWatchingTarget[MAX_PLAYERS],
    pLiveStreamTimer[MAX_PLAYERS] = {-1, ...};

static 
    pLiveStreamActorID[MAX_PLAYERS],
    pLiveStreamActorSkin[MAX_PLAYERS],
    pLiveStreamActorWorld[MAX_PLAYERS],
    pLiveStreamActorInterior[MAX_PLAYERS],
    Float:pLiveStreamActorPos[MAX_PLAYERS][3],
    Float:pLiveStreamActorAngle[MAX_PLAYERS];

static Text:LiveStreamTD[4] = {Text:-1, ...};

static stock LiveStream_Reset(playerid)
{
    pLiveStreamWatch[playerid] = false;
    pLiveStreaming[playerid] = false;
    pLiveStreamWatchingTarget[playerid] = INVALID_PLAYER_ID;
    if(pLiveStreamTimer[playerid] != -1)
    {
        KillTimer(pLiveStreamTimer[playerid]);
        pLiveStreamTimer[playerid] = -1;
    }
    if(pLiveStreamActorID[playerid] != -1)
    {
        DestroyActor(pLiveStreamActorID[playerid]);
        pLiveStreamActorID[playerid] = -1;
    }
    for(new i; i < 4; i++)
    {
        TextDrawHideForPlayer(playerid, LiveStreamTD[i]);
    }
    return 1;
}

/***
*                                       
*           db         88888888ba   88  
*          d88b        88      "8b  88  
*         d8'`8b       88      ,8P  88  
*        d8'  `8b      88aaaaaa8P'  88  
*       d8YaaaaY8b     88""""""'    88  
*      d8""""""""8b    88           88  
*     d8'        `8b   88           88  
*    d8'          `8b  88           88  
*                                       
*                                       
*/

stock LiveStream_Disable(playerid)
{
    if(pLiveStreamWatch[playerid])
    {
        LiveStream_Reset(playerid);

        TogglePlayerSpectating(playerid, false);
        SetCameraBehindPlayer(playerid);

        SetPlayerPos(playerid, pLiveStreamActorPos[playerid][0], pLiveStreamActorPos[playerid][1], pLiveStreamActorPos[playerid][2]);
        SetPlayerSkin(playerid, pLiveStreamActorSkin[playerid]);
        SetPlayerCameraPos(playerid, pLiveStreamActorPos[playerid][0], pLiveStreamActorPos[playerid][1], pLiveStreamActorPos[playerid][2] + 1.0);

        SendClientMessage(playerid, -1, "你关掉了直播画面.");
        
    }
    return 1;
}

stock LiveStream_Watch(playerid, targetid)
{
    if(!IsPlayerSpawned(playerid) || GetPlayerState(playerid) != PLAYER_STATE_ONFOOT || !IsPlayerControllable(playerid) || pLiveStreaming[playerid] == true || GetPlayerSpecialAction(playerid) != SPECIAL_ACTION_NONE)
        return SendClientMessage(playerid, -1, "你当前无法观看直播");

    if(pLiveStreaming[targetid])
    {
        if(pLiveStreamWatch[playerid] == false)
        {
            LiveStream_Reset(playerid);

            GetPlayerPos(playerid, pLiveStreamActorPos[playerid][0], pLiveStreamActorPos[playerid][1], pLiveStreamActorPos[playerid][2]);
            pLiveStreamActorSkin[playerid] = GetPlayerSkin(playerid);
            pLiveStreamActorWorld[playerid] = GetPlayerVirtualWorld(playerid);
            pLiveStreamActorInterior[playerid] = GetPlayerInterior(playerid);
            GetPlayerFacingAngle(playerid, pLiveStreamActorAngle[playerid]);

            pLiveStreamActorID[playerid] = CreateActor(pLiveStreamActorSkin[playerid], pLiveStreamActorPos[playerid][0], pLiveStreamActorPos[playerid][1], pLiveStreamActorPos[playerid][2], 0.0);
            SetActorVirtualWorld(pLiveStreamActorID[playerid], pLiveStreamActorWorld[playerid]);
            SetActorFacingAngle(pLiveStreamActorID[playerid], pLiveStreamActorAngle[playerid]);

            TogglePlayerSpectating(playerid, true);
        }
        pLiveStreamWatch[playerid] = true;
        pLiveStreamWatchingTarget[playerid] = targetid;

        for(new i; i < 4; i++)
            TextDrawShowForPlayer(playerid, LiveStreamTD[i]);

        if(pLiveStreamTimer[playerid] != -1)
        {
            KillTimer(pLiveStreamTimer[playerid]);
        }
        pLiveStreamTimer[playerid] = SetTimerEx("UpdateLiveStreamCamera", 150, true, "ii", playerid, targetid);
    }
    else SendClientMessage(playerid, -1, "该玩家没有开启直播.");
    {
        
    }
    return 1;
}

stock LiveStream_Start(playerid)
{
    if(GetPlayerState(playerid) == PLAYER_STATE_ONFOOT && IsPlayerSpawned(playerid) && !IsPlayerNPC(playerid) && pLiveStreamWatch[playerid] == false && GetPlayerSpecialAction(playerid) == SPECIAL_ACTION_NONE)
    {
        pLiveStreaming[playerid] = true;
        SendClientMessage(playerid, -1, "你开启了直播.");
        SetPlayerAttachedObject(playerid, 0, 19623, 6, 0.171000, -0.004000, -0.010000, -20.899988, 51.200038, 83.100028, 1.224000, 1.429000, 1.315999);
        SetPlayerSpecialAction(playerid, SPECIAL_ACTION_USECELLPHONE);
    }
    else SendClientMessage(playerid, -1, "你当前无法开启直播.");
    return 1;
}

stock LiveStream_Stop(playerid)
{
    if(pLiveStreaming[playerid])
    {
        if(IsPlayerSpawned(playerid))
        {
            if(IsPlayerAttachedObjectSlotUsed(playerid, 0))
                RemovePlayerAttachedObject(playerid, 0);
            
            SetPlayerSpecialAction(playerid, SPECIAL_ACTION_NONE);
        }
        foreach(new i : Player)
        {
            if(pLiveStreamWatchingTarget[i] == playerid)
            {
                LiveStream_Disable(i);
                SendClientMessage(i, -1, "对方不再直播.");
            }
        }
        pLiveStreaming[playerid] = false;
    }
    return 1;
}

forward UpdateLiveStreamCamera(playerid, targetid);
public UpdateLiveStreamCamera(playerid, targetid)
{
    if(pLiveStreamWatch[playerid] && IsPlayerConnected(targetid) && IsPlayerSpawned(targetid))
    {
        new Float:x, Float:y, Float:z, Float:angle;
        GetPlayerPos(targetid, x, y, z);
        GetPlayerFacingAngle(targetid, angle);
        new Float:cx, Float:cy;
        cx = x + (0.5 * floatsin(-angle, degrees));
        cy = y + (0.5 * floatcos(-angle, degrees));
        SetPlayerCameraPos(playerid, cx, cy, z + 0.8);
        cx = x + (1.0 * floatsin(-angle, degrees));
        cy = y + (1.0 * floatcos(-angle, degrees));
        SetPlayerCameraLookAt(playerid, cx, cy, z + 0.8, CAMERA_CUT);
    }
    else
    {
        LiveStream_Disable(playerid);
    }
    return 1;
}

/***
*                                                      
*    88                                     88         
*    88                                     88         
*    88                                     88         
*    88,dPPYba,    ,adPPYba,    ,adPPYba,   88   ,d8   
*    88P'    "8a  a8"     "8a  a8"     "8a  88 ,a8"    
*    88       88  8b       d8  8b       d8  8888[      
*    88       88  "8a,   ,a8"  "8a,   ,a8"  88`"Yba,   
*    88       88   `"YbbdP"'    `"YbbdP"'   88   `Y8a  
*                                                      
*                                                      
*/

hook OnGameModeInit()
{
    LiveStreamTD[0] = TextDrawCreate(0.000000, 0.000000, "LD_PLAN:tvcorn");
    TextDrawLetterSize(LiveStreamTD[0], 0.000000, 0.000000);
    TextDrawTextSize(LiveStreamTD[0], 320.000000, 240.000000);
    TextDrawAlignment(LiveStreamTD[0], TEXT_DRAW_ALIGN_LEFT);
    TextDrawColour(LiveStreamTD[0], -1);
    TextDrawSetShadow(LiveStreamTD[0], 0);
    TextDrawSetOutline(LiveStreamTD[0], 0);
    TextDrawBackgroundColour(LiveStreamTD[0], 255);
    TextDrawFont(LiveStreamTD[0], TEXT_DRAW_FONT_SPRITE_DRAW);
    TextDrawSetProportional(LiveStreamTD[0], false);
    TextDrawSetShadow(LiveStreamTD[0], 0);

    LiveStreamTD[1] = TextDrawCreate(640.000000, 0.000000, "LD_PLAN:tvcorn");
    TextDrawLetterSize(LiveStreamTD[1], 0.000000, 0.000000);
    TextDrawTextSize(LiveStreamTD[1], -320.000000, 240.000000);
    TextDrawAlignment(LiveStreamTD[1], TEXT_DRAW_ALIGN_LEFT);
    TextDrawColour(LiveStreamTD[1], -1);
    TextDrawSetShadow(LiveStreamTD[1], 0);
    TextDrawSetOutline(LiveStreamTD[1], 0);
    TextDrawBackgroundColour(LiveStreamTD[1], 255);
    TextDrawFont(LiveStreamTD[1], TEXT_DRAW_FONT_SPRITE_DRAW);
    TextDrawSetProportional(LiveStreamTD[1], false);
    TextDrawSetShadow(LiveStreamTD[1], 0);

    LiveStreamTD[2] = TextDrawCreate(0.000000, 435.000000, "LD_PLAN:tvcorn");
    TextDrawLetterSize(LiveStreamTD[2], 0.000000, 0.000000);
    TextDrawTextSize(LiveStreamTD[2], 320.000000, -240.000000);
    TextDrawAlignment(LiveStreamTD[2], TEXT_DRAW_ALIGN_LEFT);
    TextDrawColour(LiveStreamTD[2], -1);
    TextDrawSetShadow(LiveStreamTD[2], 0);
    TextDrawSetOutline(LiveStreamTD[2], 0);
    TextDrawBackgroundColour(LiveStreamTD[2], 255);
    TextDrawFont(LiveStreamTD[2], TEXT_DRAW_FONT_SPRITE_DRAW);
    TextDrawSetProportional(LiveStreamTD[2], false);
    TextDrawSetShadow(LiveStreamTD[2], 0);

    LiveStreamTD[3] = TextDrawCreate(640.000000, 435.000000, "LD_PLAN:tvcorn");
    TextDrawLetterSize(LiveStreamTD[3], 0.000000, 0.000000);
    TextDrawTextSize(LiveStreamTD[3], -320.000000, -240.000000);
    TextDrawAlignment(LiveStreamTD[3], TEXT_DRAW_ALIGN_LEFT);
    TextDrawColour(LiveStreamTD[3], -1);
    TextDrawSetShadow(LiveStreamTD[3], 0);
    TextDrawSetOutline(LiveStreamTD[3], 0);
    TextDrawBackgroundColour(LiveStreamTD[3], 255);
    TextDrawFont(LiveStreamTD[3], TEXT_DRAW_FONT_SPRITE_DRAW);
    TextDrawSetProportional(LiveStreamTD[3], false);
    TextDrawSetShadow(LiveStreamTD[3], 0);

    return 1;
}

hook OnPlayerConnect(playerid)
{
    LiveStream_Reset(playerid);
    return 1;
}

hook OnPlayerDisconnect(playerid, reason)
{
    LiveStream_Reset(playerid);
    return 1;
}

hook OnPlayerGiveDamageActor(playerid, damaged_actorid, Float:amount, WEAPON:weaponid, bodypart)
{
    foreach(new i : Player)
    {
        if(damaged_actorid == pLiveStreamActorID[i])
        {
            LiveStream_Disable(i);
        }
    }
    return 1;
}

hook OnPlayerStateChange(playerid, PLAYER_STATE:newstate, PLAYER_STATE:oldstate)
{
    if(!IsPlayerSpawned(playerid) || !IsPlayerConnected(playerid))
    {
        LiveStream_Stop(playerid);
    }
    return 1;
}

/***
*                                                                                                           
*                                                                                                       88  
*                                                                                                       88  
*                                                                                                       88  
*     ,adPPYba,   ,adPPYba,   88,dPYba,,adPYba,   88,dPYba,,adPYba,   ,adPPYYba,  8b,dPPYba,    ,adPPYb,88  
*    a8"     ""  a8"     "8a  88P'   "88"    "8a  88P'   "88"    "8a  ""     `Y8  88P'   `"8a  a8"    `Y88  
*    8b          8b       d8  88      88      88  88      88      88  ,adPPPPP88  88       88  8b       88  
*    "8a,   ,aa  "8a,   ,a8"  88      88      88  88      88      88  88,    ,88  88       88  "8a,   ,d88  
*     `"Ybbd8"'   `"YbbdP"'   88      88      88  88      88      88  `"8bbdP"Y8  88       88   `"8bbdP"Y8  
*                                                                                                           
*                                                                                                           
*/

CMD:livestream(playerid, params[])
{
    if(pLiveStreaming[playerid] == false)
        LiveStream_Start(playerid);

    else
        LiveStream_Stop(playerid);

    return 1;
}

CMD:watchlive(playerid, params[])
{
    new targetid;
    if(sscanf(params, "I(-1)", targetid))
        return SendClientMessage(playerid, -1, "/watchlive [目标玩家ID]");
    
    if(targetid != -1)
        LiveStream_Watch(playerid, targetid);

    else LiveStream_Disable(playerid);
    return 1;
}
