#include <stdlib.h>
#include <stdio.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
    (byte & 128 ? '1' : '0'), \
    (byte & 64 ? '1' : '0'), \
    (byte & 32 ? '1' : '0'), \
    (byte & 16 ? '1' : '0'), \
    (byte & 8 ? '1' : '0'), \
    (byte & 4 ? '1' : '0'), \
    (byte & 2 ? '1' : '0'), \
    (byte & 1 ? '1' : '0') 

unsigned char pbcd(int n);


int main(){
    printf("start");

    pbcd(12345);
    pbcd(67);
    pbcd(98765);
    pbcd(43298);

    return 0;
}

unsigned char pbcd(int number) {
    int lastDigit = number % 10;
    number = number / 10;
    int secondToLastDigit = number % 10;

    printf(""BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(secondToLastDigit));
    printf(" ");
    printf(""BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(lastDigit));
    printf("\n");

    return 'a';
}