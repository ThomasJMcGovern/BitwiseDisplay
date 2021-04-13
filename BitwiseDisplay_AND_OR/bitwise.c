#include <stdio.h>

void displayBits(unsigned int value);

int main(){
    unsigned int number;
    char conversion[] = "This uses bitwise operations to display an unsigned integer in its\n32-bit binary representation\n";
    printf("%s\nUnsigned Integer to convert to binary:", conversion);
    scanf("%d", &number);
    printf("Base 10: %d\n", number);
    printf("Base 2: ");
    displayBits(number);

    unsigned int mask;
    char andOperator[] = "This performs a bitwise AND operation on an unsigned number by a bit mask";
    printf("\n%s", andOperator);
    printf("Unsigned Integer: ");
    scanf("%d", &number);
    printf("Mask to perform AND operation on: ");
    scanf("%d", &mask);
    puts("\nnumber1 & mask1 result");
    displayBits(number);
    printf("AND\n");
    displayBits(mask);
    printf("==\n");
    displayBits(number & mask);


    char orOperator[] = "This performs a bitwise OR operation on an unsigned number by a bit mask\n";
    printf("%s\n", orOperator);
    printf("Unsigned Integer: ");
    scanf("%d", &number);
    printf("Mask to perform OR operation on: ");
    scanf("%d", &mask);
    puts("\nnumber1 | mask1 result");
    displayBits(number);
    printf("OR\n");
    displayBits(mask);
    printf("==\n");
    displayBits(number | mask);

    printf("%s\n", "Complete");
    return 0;
}

void displayBits(unsigned int value){
    unsigned int mask = 1 << ((sizeof(unsigned int) * __CHAR_BIT__)-1);

    for(int i = 1; i <= (sizeof(unsigned int) * __CHAR_BIT__); i++){
        putchar(value & mask ? '1' : '0');
        value <<= 1;

        if(i % 8 == 0){
            putchar(' ');

        }

    }
    putchar('\n');
}