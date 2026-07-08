// Program to demonstrate different data types in C

#include <stdio.h>

int main()
{
    int integer = 10;
    char character = 'A';
    float decimal = 10.5f;
    double largeDecimal = 20.56789;

    printf("Integer : %d\n", integer);
    printf("Character : %c\n", character);
    printf("Float : %.2f\n", decimal);
    printf("Double : %.5lf\n", largeDecimal);

    printf("\nSize of int = %zu bytes\n", sizeof(integer));
    printf("Size of char = %zu bytes\n", sizeof(character));
    printf("Size of float = %zu bytes\n", sizeof(decimal));
    printf("Size of double = %zu bytes\n", sizeof(largeDecimal));

    return 0;
}
