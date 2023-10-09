/*
 * sofware_timer.h
 *
 *  Created on: Oct 9, 2023
 *      Author: kenng
 */

#ifndef INC_SOFWARE_TIMER_H_
#define INC_SOFWARE_TIMER_H_
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void set_timer1(int duration);
void set_timer2(int duration);
void set_timer3(int duration);
void timerRun();

#endif /* INC_SOFWARE_TIMER_H_ */
