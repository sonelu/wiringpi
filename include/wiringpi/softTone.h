
/*
 * softTone.c:
 *	For that authentic retro sound...
 *	Er... A little experiment to produce tones out of a Pi using
 *	one (or 2) GPIO pins and a piezeo "speaker" element.
 *	(Or a high impedance speaker, but don'y blame me if you blow-up
 *	the GPIO pins!)
 *	Copyright (c) 2012 Gordon Henderson
 ***********************************************************************
 * This file is part of wiringPi:
 *	https://github.com/WiringPi/WiringPi/
 *
 *    wiringPi is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as
 *    published by the Free Software Foundation, either version 3 of the
 *    License, or (at your option) any later version.
 *
 *    wiringPi is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with wiringPi.
 *    If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************
 */

#ifdef __cplusplus
extern "C" {
#endif

extern int  softToneCreate (int pin) ;
extern void softToneStop   (int pin) ;
extern void softToneWrite  (int pin, int freq) ;

#ifdef __cplusplus
}
#endif
