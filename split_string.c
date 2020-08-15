#include <stdio.h>
#include <string.h>


int main() {
	char string[100];
	int var = 0;
	
// Reading a string from user
	printf("Enter the string:\n");
	scanf("%s",string);
	
// Checking for presence of '_' and printing the required strings	
	while(var <= strlen(string)){
		if(string[var] == '_') printf("\n");
		else printf("%c",string[var]);
		var ++;
	}

	return 0;
}
