#include <stdio.h>

int main() {
	char  c_data = 100 ;
	char* p_data ;
	p_data = &c_data;
	char c_val = *p_data ;
	//read operation
    printf("Data address is %p \n", p_data);
    printf("Data stored is %d\n", c_val);
    //write operation
    *p_data = 101;
    printf("Data stored after write is : %d ",c_data);
    return 0;
}