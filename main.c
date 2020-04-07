/*
 * File:   main.c
 * Author: emad95
 *
 * Created on April 7, 2020, 11:36 PM
 */


#include <avr/io.h>
# define relay 2 
int main(void) {
    /* Replace with your application code */
    DDRA  |= (1<<relay);
    PORTA |= (1<<relay);
    while (1) {
    }
}
