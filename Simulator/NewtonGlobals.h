// ==============================
// File:			NewtonGlobals.h
// Project:			Einstein
//
// Copyright 1999-2012 by Newton Research Group and others
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
// ==============================
// $Id$
// ==============================


#ifndef NEWTON_GLOBALS_H
#define NEWTON_GLOBALS_H


#include "Sim.h"
#include "Frames/TInterpreter.h"



FreqFuncDef* GlobalGetFreqFuncInfo(); //SIM_GLOBAL_W_DECL(FreqFuncDef*, FreqFuncInfo, 0x0C1051F4);
SIM_GLOBAL_W_DECL(Ref, FreqFuncs, 0x0C105450);


#endif	// NEWTON_GLOBALS_H
