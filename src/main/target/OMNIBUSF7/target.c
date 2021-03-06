/*
 * This is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"

#include "drivers/dma.h"
#include "drivers/timer.h"
#include "drivers/timer_def.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    DEF_TIM(TIM1,  CH3, PE13, TIM_USE_PPM, 0, 1), // RC1 / PPM

    DEF_TIM(TIM3,  CH3, PB0,  TIM_USE_MOTOR, 1, 0), // M1
    DEF_TIM(TIM3,  CH4, PB1,  TIM_USE_MOTOR, 1, 0), // M2
    DEF_TIM(TIM1,  CH1, PE9,  TIM_USE_MOTOR, 1, 2), // M3
    DEF_TIM(TIM1,  CH2, PE11, TIM_USE_MOTOR, 1, 1), // M4

    DEF_TIM(TIM4,  CH1, PD12,  TIM_USE_LED, 1,  0 ), // LED
};
