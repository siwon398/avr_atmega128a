﻿#ifndef LED_H_
#define LED_H_

#include <avr/io.h>

typedef struct
{
	volatile uint8_t	*port;	//LED가 연결된 포트
	uint8_t				pin;	//LED가 연결된 핀번호
}LED;

void ledInit(LED *led);
void ledOn(LED *led);
void ledOff(LED *led);


#endif /* LED_H_ */