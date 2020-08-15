#include<stdio.h>
#include<stdlib.h>

// Function to sort the array
void sort(int *array, int size){
	int var1;
	int var2;
	int temp;
	for(var1 = 0; var1 < size; var1 ++){
		for(var2 = 0; var2 < size; var2 ++){
			
// Swapping the numbers if they are not in ascending order			
			if(*(array + var1) < *(array + var2)){
				temp = *(array + var1);
				*(array + var1) = *(array + var2);
				*(array + var2) = temp;
			}
			
		}
	}	
}

int main(){
	int size = 5;
	int var;
	int *ptr;
	
// Reading the size of the array
	printf("Enter the size of the array :");
	scanf("%d",&size);
	
// Assigning dynamic memory to the pinter using malloc
	ptr = (int*) calloc(size,sizeof(int));
	
// Reading array elements
	printf("Enter array elements :");
	for(var = 0; var < size; var ++){
		scanf("%d",&ptr[var]);
	}
// Passing the pointer by call by refernce
	sort(ptr,size);
	
// Printing the sorted array
	printf("Sorted array is :");
	for(var = 0; var < size; var ++){
		printf("%d\t",*(ptr+var));
	}

	return 0;
}
