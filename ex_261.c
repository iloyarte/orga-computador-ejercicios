/***
Ejercicio 2.61

Fuente: Randal E. Bryant, David R. O’Hallaron, Computer Systems: A Programmer’s Perspective (3.ª ed.), Pearson (2016).
***/

#include <stdio.h>

void printHex(char prepend[], int x){
  printf("%s %x\n", prepend, x);
}

//  Any bit of x equals 1.
int any_bit_to_1(int x){
  return ((x|0) != 0);
}

// Any bit of x equals 0.
int any_bit_to_0(int x){
  return ((x&(~0)) != ~0);
}

// Any bit in the least significant byte of x equals 1.
int least_significant_to_1(int x){
  int mask = 0xFF000000;
  return (x&mask)!=0;
}

// Any bit in the most significant byte of x equals 0
int most_significant_to_0(int x){
  int mask = 0xFF;
  return (x&mask) != 0xFF;
}

int main() {

    printf("any_bit_to_1, value: 0, result: %d\n", any_bit_to_1(0));
    printf("any_bit_to_1, value: 1, result: %d\n", any_bit_to_1(1));

    printf("any_bit_to_0, value: 0, result: %d\n", any_bit_to_0(0));
    printf("any_bit_to_0, value: ~0, result: %d\n", any_bit_to_0(~0));

    printf("least_significant_to_1, value: 0, result: %d\n", least_significant_to_1(0));
    printf("least_significant_to_1, value: ~0, result: %d\n", least_significant_to_1(~0));

    printf("most_significant_to_0, value: 0xFF, result: %d\n", most_significant_to_0(0xFF));
    printf("most_significant_to_0, value: ~0xFF, result: %d\n", most_significant_to_0(~0xFF));

);



    return 0;
}
