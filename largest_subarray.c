//Program to find the largest subarray fromt he given array
#include<stdio.h>

int main(){
	int size;
	int m, l;
	
	printf("Enter the size of the array:");
	scanf("%d",&size);
	
	printf("\nEnter the element of the array:");
	int arr[size];
	
	for (int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}
	
	int largest = arr[0];
	for(int i = 0; i < size; i++){
		
		int sum=0;
		for(int j = i; j < size; j++){
			
			sum = sum + largest;
			if(sum>largest){
				m = i;
				l = j;
			}
		}
	}
	
	printf("\nThe largest countinous subarray is:");
	for(int z = m; z <= l; z++){
		
		printf("%d\t",arr[z]);
	}
	
	printf("\nThe sum of these subarray is:");
	printf("%d",largest);
	return 0;
}
