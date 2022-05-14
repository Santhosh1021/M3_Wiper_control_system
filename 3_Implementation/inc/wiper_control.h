/**
 * @file wiper_control.h
 * @author Santhosh A
 * @brief Header file for wiper control operations

 */

#ifndef __WIPER_CONTROL_H__
#define __WIPER_CONTROL_H__

#include <stdlib.h>

#include "driverfile.h"
#include <stdio.h>




static void ignit_on(void);
/**
* @turn ON the Red LED 
*/
static void led_1(void);
/**
* @Turn ON all LED's with 1hz
*/
static void led_2(void);
/**
* @Turn ON all LED's with 4hz
*/
static void led_3(void);
/**
* @Turn ON all LED's with 8hz
*/
static void ignit_off(void);
/**
* @Turn OFF the Red LED
*/
#endif  /* #define __WIPER_CONTROL_H__ */
