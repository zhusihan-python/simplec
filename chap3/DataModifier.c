# include <stdio.h>

int main() {
    // 定义变量并初始化
    unsigned short int number1 = 600;
    long int number2 = 700;
    unsigned long int number3 = 800;
    unsigned long long int number4 = 900;
    signed char number5 = 97;
    unsigned char number6 = 255;

    // 输出变量的值和所占的字节数
    printf("number1: %u\n", number1);
    printf("number1所占的字节数: %zu\n", sizeof(number1));
    printf("number2: %ld\n", number2);
    printf("number2所占的字节数: %zu\n", sizeof(number2));
    printf("number3: %lu\n", number3);
    printf("number3所占的字节数: %zu\n", sizeof(number3));
    printf("number4: %llu\n", number4);
    printf("number4所占的字节数: %zu\n", sizeof(number4));
    printf("number5: %c\n", number5);
    printf("number5所占的字节数: %zu\n", sizeof(number5));
    printf("number6: %u\n", number6);
    printf("number6所占的字节数: %zu\n", sizeof(number6));
}
