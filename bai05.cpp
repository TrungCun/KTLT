#include<stdio.h>

double* maxNum(double* arr){
	double* maxNum;
	maxNum = arr;
	for(int i = 0; i < sizeof(arr); i++){
		if(*maxNum < arr[i]){
			maxNum = &arr[i];
		}
	}
	return maxNum;
}
