/*
 *      main.c
 *
 *      Created on: May 21, 2024
 *      Author: jammu Ganesh Kumar
 */

#include <stdio.h>
#include <stdint.h>

struct carModel {
	uint32_t carNumber ;
	uint32_t carPrice;
	uint32_t carMaxSpeed;
	 float carWeight;
};

int main(){
	struct carModel BMW = {2000,100000,150,400.5};
	struct carModel TATA = {.carMaxSpeed = 300,.carNumber=8989,.carPrice =67700,.carWeight=500.0};

	//Reading the data
	printf("Details of BMW \n");
	printf("Car Max Speed: %u\n",BMW.carMaxSpeed);
	printf("Car Number : %u\n",BMW.carNumber);
	printf("Car Price :%u\n",BMW.carPrice);
	printf("Car Weight :%f\n",BMW.carWeight);

	printf("\n Details of TATA \n");
	printf("Car Max Speed: %u\n",TATA.carMaxSpeed);
	printf("Car Number : %u\n",TATA.carNumber);
	printf("Car Price :%u\n",TATA.carPrice);
	printf("Car Weight :%f\n",TATA.carWeight);

	//write to struct
	printf("\nCar Max Speed: %u\n",BMW.carMaxSpeed);
	BMW.carMaxSpeed = 200 ;
	printf("\nCar Max Speed: %u\n",BMW.carMaxSpeed);

	return 0 ;
}

