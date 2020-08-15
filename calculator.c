#include<stdio.h>

/* Function which returns sum of two numbers*/
int sum(int num1, int num2){
	return num1 + num2;
}

/* Function which returns difference of two numbers*/
int difference(int num1, int num2){
	return num1 - num2;
}

int main(){
	int num1 = 50;
	int num2 = 20;
	
// Funtion pointer for the sum function
	int (*fun_ptr_sum)(int,int) = sum;
	
// Funtion pointer for the difference function
	int (*fun_ptr_difference)(int,int) = difference;
	
	printf("The sum of two numbers is :%d\n",(*fun_ptr_sum)(num1,num2));
	printf("The difference between the two numbers is :%d\n",(*fun_ptr_difference)(num1,num2));

return 0;
}
