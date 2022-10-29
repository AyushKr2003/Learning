//Program to find missing element(only one) in array 1 to n(any natural number).
#include<stdio.h>

void find(int arr[], int n){
	int temp[n + 1];
	for(int i = 0; i <= n; i++){
		temp[i] = 0;
	}
	
	for(int i = 0; i < n; i++){
		temp[arr[i] - 1] = 1;
	}
	
	int ans;
	for(int i = 0; i <= n; i++){
		if (temp[i] == 0)
            ans = i + 1;
	}
	
	printf("Missing element is = %d",ans);
}
int main(){
	int size;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the element of array:");
	for(int i = 0; i < size; i++){
		scanf("%d",&arr[i]);
	}
	
	find(arr, size);
	return 0;
}
