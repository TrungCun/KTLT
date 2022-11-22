#include<stdio.h>

void printArray(int* arr, int n){
	for(int i = 0; i < n; i++){
		printf("arr[%d] = %d  ", i, *(arr + i));
	}
	printf("\n");

}

void scanArray(int* arr, int n){
		for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", arr + i);
		printf("\n");
	}
}

void sortArray(int* arr, int n){
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(*(arr + i) > *(arr + j)){
				int temp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = temp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int* arr;
	arr = new int[n];
	scanArray(arr, n);
	printArray(arr, n);
	sortArray(arr, n);
	printArray(arr, n);
}
