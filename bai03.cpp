#include<iostream>

int main(){
	int num1, num2, num3;
	int* ptr;
	
	scanf("%d %d %d", &num1, &num2, &num3);
	
	ptr = &num1;
	*ptr += 100;
	printf("%d\n", *ptr);
	
	ptr = &num2;
	*ptr += 100;
	printf("%d\n", *ptr);
	
	ptr = &num3;
	*ptr += 100;
	printf("%d\n", *ptr);
}
