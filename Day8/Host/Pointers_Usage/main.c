#include <stdio.h>

int main1();

int main() {
	main1();
    int i_num1 = 10;
    int i_num2 = 40;
    int* p_num1;  // Declare a pointer variable
    p_num1 = &i_num1;  // Assign i_num1's address to p_num1
    int ir_num1 = *p_num1;  // Read value from p_num1
    *p_num1 = 50;  // Write value to p_num1
    printf("Number 1 is %p \n", &i_num1);
    printf("Number 2 is %p \n", &i_num2);
    printf("Pointer Stored Address is %p \n", p_num1);
    printf("Pointer data using Read operation is %d \n", ir_num1);
    printf("Pointer data after write operation: %d \n", *p_num1);
    return 0;
}

//
//#include <stdio.h>

int main1() {
	char  c_data = 20 ;
	char* p_data ;
	p_data = &c_data;
	char c_val = *p_data ;

    printf("Data address is % x \n", &c_data);
    printf("Data stored is %d\n", c_val);
    return 0;
}
