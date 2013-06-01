/*

  Copyright (C) 2001 StrmnNrmn

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#ifndef __CONFIGOPTIONS_H__
#define __CONFIGOPTIONS_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Utility/IO.h"

// Config stuff
struct DaedalusConfig
{
	// FIXME(strmnnrmn): We never seem to assign to mRomsDir?!
	IO::Filename		mRomsDir;
	IO::Filename		mSaveDir;
};

extern DaedalusConfig	g_DaedalusConfig;

// Per-ROM config
extern bool gDynarecEnabled;			// Use dynamic recompilation
extern bool gDynarecLoopOptimisation;	// Enable the dynarec loop optmisation
extern bool gDynarecDoublesOptimisation;	// Enable the dynarec loop optmisation
extern bool gOSHooksEnabled;			// Apply os-hooks
extern u32	gSpeedSyncEnabled;
extern bool gDoubleDisplayEnabled;
extern bool gAudioRateMatch;
extern bool gVideoRateMatch;
extern bool gFogEnabled;
extern bool gMemoryAccessOptimisation;
extern bool gCheatsEnabled;
//ToDo: Needs moving to Graphics plugin config
extern bool	gCleanSceneEnabled;
extern bool	gClearDepthFrameBuffer;
extern u32	gCheckTextureHashFrequency;
//ToDo: Needs moving to Input plugin config
extern u32	gControllerIndex;

//ToDo: Need moving to Audio plugin config
enum EAudioPluginMode
{
	APM_DISABLED,
	APM_ENABLED_ASYNC,
	APM_ENABLED_SYNC,
};

extern EAudioPluginMode gAudioPluginEnabled;


#endif // __CONFIGOPTIONS_H__
