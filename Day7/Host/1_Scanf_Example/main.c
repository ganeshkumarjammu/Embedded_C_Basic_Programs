#include <stdio.h>

int main(){
	int num1,num2,num3,avg;
	printf("Enter SA 1 Marks , SA 2 Marks , SA 3 Marks:");
	fflush(stdout);
	scanf("%d %d %d",&num1,&num2,&num3);
	avg = (num1+num2+num3)/3;
	printf("The Total SA Marks Average is : %d",avg);
	getchar();
	//getchar();
	//return 0;
}
