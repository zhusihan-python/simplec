#include<stdio.h>

//声明全局变量
int number1 = 100;
char name[] = "Ben";

int main() {
    short int number2 = 500;
    printf("number1: %d\n", number1);
    printf("number1所占字节数：%lu\n", sizeof(number1));

    printf("number2: %hd\n", number2);
    printf("number2所占字节数: %lu\n", sizeof(number2));
}
