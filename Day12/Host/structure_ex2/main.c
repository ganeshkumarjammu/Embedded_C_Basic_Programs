/*
 * main.c
 *
 *       Created on: May 21, 2024
 *      Author: jammu Ganesh Kumar
 *      example 2
 */

#include <stdio.h>
#include <stdint.h>

struct carModel {
	uint32_t carNumber ;
	uint32_t carPrice;
	 float carWeight;
	 uint8_t carMaxSpeed;
};
//__attribute__((packed));

int main(){
	struct carModel BMW = {2000,10000,400.5,100};
	printf("Size of structure variable %u\n",sizeof(BMW));
	//it shows 16B instead of 13B due to aligned or Padding of Structure by default.
	return 0 ;
}

