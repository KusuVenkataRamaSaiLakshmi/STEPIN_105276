#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Function which checks for a prime number */
const char* is_prime(int num){
	int var;
// Checks whether the user entered positive number or not
	if(num <= 0){
		return "Please provide a non-zero positive number";
	}
// for loop for to find prime or not
	for(var = 2; var < sqrt(num); var++){
		if(num % var == 0) return "false";
	}
	return "true";	
}

int main() {
	int num;
	printf("Please enter the number:\n");
	scanf("%d",&num);
	printf("%s\n",is_prime(num));
	return 0;
}
