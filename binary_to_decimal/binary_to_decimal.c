#include <stdio.h>
#include <math.h>
int Binary_decimal(int bin1, int bin2, int bin3) {
    int dec;
    dec = bin3 * 4 + bin2 * 2 + bin1 * 1; 
    return dec;
}

int get_binary_input() {
    int bin;
    printf("Enter a binary number: ");
    scanf("%d", &bin);
    return bin;
}

int main() {
    int bin1;
    int bin2;
    int bin3;
    int decimal;

    bin1 = get_binary_input();
    bin2 = get_binary_input();
    bin3 = get_binary_input();

    decimal = Binary_decimal(bin1, bin2, bin3);
    printf("The decimal number is: %d\n", decimal);
}
