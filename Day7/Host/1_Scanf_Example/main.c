#include <stdio.h>

int printFloat();
int scanNums();

int main(){
    scanNums();
	printFloat();
	//getchar();
	//return 0;
}

int scanNums(){
	int num1,num2,num3,avg;
	printf("Enter SA 1 Marks , SA 2 Marks , SA 3 Marks:");
	fflush(stdout);
	scanf("%d %d %d",&num1,&num2,&num3);
	avg = (num1+num2+num3)/3;
	printf("The Total SA Marks Average is : %d\n",avg);
	//getchar();
	return 0;
}

int printFloat(){
	float num1 = 5.6667;
	printf("The Float number is %0.2f\n ", num1);
	//getchar();
	return 0 ;
}
