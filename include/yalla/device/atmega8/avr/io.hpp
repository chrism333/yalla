/**
 * @brief  Atmega8 IO register and bit definitions
 * @author Christian Menard
 * @date   2015-01-25
 */

/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Christian Menard
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#pragma once

#include <avr/bit.hpp>
#include <avr/register.hpp>

namespace yalla
{

using SREG = Register<0x5f,
                      ReadWriteBit,  // I
                      ReadWriteBit,  // T
                      ReadWriteBit,  // H
                      ReadWriteBit,  // S
                      ReadWriteBit,  // V
                      ReadWriteBit,  // N
                      ReadWriteBit,  // Z
                      ReadWriteBit>; // C

using I = SREG::Bit7;
using T = SREG::Bit6;
using H = SREG::Bit5;
using S = SREG::Bit4;
using V = SREG::Bit3;
using N = SREG::Bit2;
using C = SREG::Bit1;
using Z = SREG::Bit0;

using SPH = Register<0x5e,
                     ReservedBit,   // -
                     ReservedBit,   // -
                     ReservedBit,   // -
                     ReservedBit,   // -
                     ReservedBit,   // -
                     ReadWriteBit,  // SP10
                     ReadWriteBit,  // SP9
                     ReadWriteBit>; // SP8

using SP10 = SREG::Bit2;
using SP9  = SREG::Bit1;
using SP8  = SREG::Bit0;

using SPL = Register<0x5d,
                     ReadWriteBit,  // SP7
                     ReadWriteBit,  // SP6
                     ReadWriteBit,  // SP5
                     ReadWriteBit,  // SP4
                     ReadWriteBit,  // SP3
                     ReadWriteBit,  // SP2
                     ReadWriteBit,  // SP1
                     ReadWriteBit>; // SP0

using SP7 = SREG::Bit7;
using SP6 = SREG::Bit6;
using SP5 = SREG::Bit5;
using SP4 = SREG::Bit4;
using SP3 = SREG::Bit3;
using SP2 = SREG::Bit2;
using SP1 = SREG::Bit1;
using SP0 = SREG::Bit0;

// ... TODO

using TWCR = Register<0x56,
                      StatusBitClearBy1, // TWINT
                      ReadWriteBit,      // TWEA
                      ReadWriteBit,      // TWSTA
                      ReadWriteBit,      // TWSTO
                      ReadOnlyBit,       // TWWC
                      ReadWriteBit,      // TWEN
                      ReservedBit,       // -
                      ReadWriteBit>;     // TWIE

using TWINT = TWCR::Bit7;
using TWEA  = TWCR::Bit6;
using TWSTA = TWCR::Bit5;
using TWSTO = TWCR::Bit4;
using TWWC  = TWCR::Bit3;
using TWEN  = TWCR::Bit2;
using TWIE  = TWCR::Bit0;

// ... TODO

using PORTD = Register<0x32,
                       ReadWriteBit,  // PORTD7
                       ReadWriteBit,  // PORTD6
                       ReadWriteBit,  // PORTD5
                       ReadWriteBit,  // PORTD4
                       ReadWriteBit,  // PORTD3
                       ReadWriteBit,  // PORTD2
                       ReadWriteBit,  // PORTD1
                       ReadWriteBit>; // PORTD0

using PORTD7 = PORTD::Bit7;
using PORTD6 = PORTD::Bit6;
using PORTD5 = PORTD::Bit5;
using PORTD4 = PORTD::Bit4;
using PORTD3 = PORTD::Bit3;
using PORTD2 = PORTD::Bit2;
using PORTD1 = PORTD::Bit1;
using PORTD0 = PORTD::Bit0;

// ... TODO

using PORTC = Register<0x35,
                       ReservedBit,   // -
                       ReadWriteBit,  // PORTC6
                       ReadWriteBit,  // PORTC5
                       ReadWriteBit,  // PORTC4
                       ReadWriteBit,  // PORTC3
                       ReadWriteBit,  // PORTC2
                       ReadWriteBit,  // PORTC1
                       ReadWriteBit>; // PORTC0

using PORTC6 = PORTC::Bit6;
using PORTC5 = PORTC::Bit5;
using PORTC4 = PORTC::Bit4;
using PORTC3 = PORTC::Bit3;
using PORTC2 = PORTC::Bit2;
using PORTC1 = PORTC::Bit1;
using PORTC0 = PORTC::Bit0;

// ... TODO

using ADCH = DataRegister<0x25>;
using ADCL = DataRegister<0x24>;
using ADC  = DataRegister16<0x24>;

// ... TODO

} // namespace lunacy
