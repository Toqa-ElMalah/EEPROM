/*
 * EEPROM___DRIVER1.h
 *
 * Created: 10/16/2023 4:41:14 PM
 *  Author: DELL
 */ 


#ifndef EEPROM_DRIVER_H_
#define EEPROM_DRIVER_H_

void EEPROM_write (unsigned short address,unsigned char data);
unsigned char EEPROM_read (unsigned short address);


#endif