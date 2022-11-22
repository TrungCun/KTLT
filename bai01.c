#include<stdio.h>
int main(){
    int num1, num2, num3;
    int* ptr;

    
    scanf("%d %d %d", &num1, &num2, &num3);

    
    ptr = &num1;
    printf("num1 = %d\n", *ptr);
    
    ptr = &num2;
    printf("num2 = %d\n", *ptr);

    ptr = &num3;
    printf("num3 = %d\n", *ptr);
}
