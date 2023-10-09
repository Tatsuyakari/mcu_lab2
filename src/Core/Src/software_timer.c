/*
 * software_timer.c
 *
 *  Created on: Oct 9, 2023
 *      Author: kenng
 */
#include "sofware_timer.h"

int timer1_counter = 0;
int timer1_flag = 0; // Define timer1_flag as a global variable
int timer2_counter = 0;
int timer2_flag = 0; // Define timer2_flag as a global variable
int timer3_counter = 0;
int timer3_flag = 0; // Define timer3_flag as a global variable

void set_timer1(int duration)
{
    timer1_counter = duration;
    timer1_flag = 0;
}
void set_timer2(int duration)
{
    timer2_counter = duration;
    timer2_flag = 0;
}
void set_timer3(int duration)
{
    timer3_counter = duration;
    timer3_flag = 0;
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
    if (timer2_counter > 0)
    {
        timer2_counter--;
        if (timer2_counter <= 0)
        {
            timer2_flag = 1;
        }
    }
    if (timer3_counter > 0)
    {
        timer3_counter--;
        if (timer3_counter <= 0)
        {
            timer3_flag = 1;
        }
    }
}
