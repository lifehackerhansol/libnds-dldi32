/*---------------------------------------------------------------------------------
	$Id: console.h,v 1.2 2005-08-01 23:18:22 wntrmute Exp $

	console functions

	Copyright (C) 2005
		Michael Noland (joat)
		Jason Rogers (dovoto)
		Dave Murphy (WinterMute)

	This software is provided 'as-is', without any express or implied
	warranty.  In no event will the authors be held liable for any
	damages arising from the use of this software.

	Permission is granted to anyone to use this software for any
	purpose, including commercial applications, and to alter it and
	redistribute it freely, subject to the following restrictions:

	1.	The origin of this software must not be misrepresented; you
		must not claim that you wrote the original software. If you use
		this software in a product, an acknowledgment in the product
		documentation would be appreciated but is not required.
	2.	Altered source versions must be plainly marked as such, and
		must not be misrepresented as being the original software.
	3.	This notice may not be removed or altered from any source
		distribution.

	$Log: not supported by cvs2svn $

---------------------------------------------------------------------------------*/
#ifndef CONSOLE_H
#define CONSOLE_H

#define CONSOLE_USE_COLOR255 16

#ifdef __cplusplus
extern "C" {
#endif

void consoleInit(u16* font, u16* charBase, u16 numCharacters, u8 charStart, u16* map, u8 pal, u8 bitDepth);
void consoleInitDefault(u16* map, u16* charBase, u8 bitDepth);

void consolePrintf(const char* s, ...);

void consolePrintSet(int x, int y);

void consolePrintChar(char c);

void consolePutString(int x, int y, char* s);
void consolePutInt(int x, int y, int d);
void consolePutX(int x, int y, int d);
void consolePutChar(int x, int y, char c);
void consolePutBin(int x, int y, int b);

void consoleClear(void);

#ifdef __cplusplus
}
#endif

#endif
