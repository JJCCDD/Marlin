/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

//
// R25 = 200 kOhm, beta25 = 4338 K, 4.7 kOhm pull-up, ATC Semitec 204GT-2
// Verified by linagee. Source: https://www.mouser.com/datasheet/2/362/semitec%20usa%20corporation_gtthermistor-1202937.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
//
const temp_entry_t temptable_1001[] PROGMEM = {
  { OV(   1), 848 },
  { OV(  18), 500 }, // top rating 500C
  { OV(  22), 480 },
  { OV(  27), 460 },
  { OV(  33), 440 },
  { OV(  41), 420 },
  { OV(  52), 400 },
  { OV(  68), 380 },
  { OV(  87), 360 },
  { OV( 112), 340 },
  { OV( 147), 320 },
  { OV( 194), 300 },
  { OV( 255), 280 },
  { OV( 331), 260 },
  { OV( 428), 240 },
  { OV( 534), 220 },
  { OV( 647), 200 },
  { OV( 755), 180 },
  { OV( 845), 160 },
  { OV( 913), 140 },
  { OV( 960), 120 },
  { OV( 990), 100 },
  { OV(1008),  80 },
  { OV(1017),  60 },
  { OV(1022),  30 },
  { OV(1023),  25 },
  { OV(1023),  20 },
  { OV(1023),  10 },
  { OV(1023),   0 }
};
