/*
 * software_timer.c
 *
 *  Created on: Oct 9, 2023
 *      Author: kenng
 */
#include "sofware_timer.h"

int timer1_counter = 0;
int timer1_flag = 0; // Define timer1_flag as a global variable

void set_timer1(int duration)
{
    timer1_counter = duration;
    timer1_flag = 0;
}
void timerRun()
{
    if (timer1_counter > 0)
    {
        timer1_counter--;
        if (timer1_counter <= 0)
        {
            timer1_flag = 1;
        }
    }
}
