#include <stdio.h>

int if_func();
int if_else();

int main(){
 if_func();
 if_else();
}

int if_func(){
	int i_age ;
	printf("Enter your age :");
	fflush(stdout);
	scanf("%d",&i_age);
	if(i_age >= 18){
		printf("Your entered age is %d\n",i_age);
		//fflush(stdout);
		printf("You are eligible for vote\n");
		//fflush(stdout);
	}
	if(i_age < 18){
		printf("Your entered age is %d \n",i_age);
		//fflush(stdout);
		printf("You are not eligible for age\n");
		//fflush(stdout);
	}
	printf("Thank you\n");
//uncomment the fflush lines you are not getting the output statements after entering the age.
	return 0;
}

int if_else(){
	int i_marks1 ;
	int i_marks2 ;
	printf("Enter Maths marks:");
	fflush(stdout);
	scanf("%d",&i_marks1);
	printf("Enter Science marks:");
	fflush(stdout);
	scanf("%d",&i_marks2);
	if(i_marks1 == i_marks2){
		printf("Equal Marks");
	}
	else {
		if(i_marks1 < i_marks2){
			printf("you got more marks in Science than in Maths");
		}
		else{
			printf("you got more marks in Maths than in Science");
		}
	}
	return 0;
}
