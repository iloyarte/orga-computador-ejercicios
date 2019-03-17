/***
Ejercicio 2.60

Fuente: Randal E. Bryant, David R. O’Hallaron, Computer Systems: A Programmer’s Perspective (3.ª ed.), Pearson (2016). Página 81
***/

#include <stdio.h>
#include <stdint.h>



// This should return sth like.
// Test A: replace_byte(0x12345678, 2, 0xAB) --> 0x12AB5678
// Test B: replace_byte(0x12345678, 0, 0xAB) --> 0x123456AB

uint32_t replace_byte(uint32_t x, int i, unsigned char b){
  return (x&(~(0xFF<<(i<<3))))|b<<(i<<3);
}


int main(){

  printf("Test A: replace_byte(0x12345678, 2, 0xAB) --> 0x12AB5678 || ACTUAL RESULT: %x\n", replace_byte(0x12345678, 2, 0xAB));
  printf("Test B: replace_byte(0x12345678, 0, 0xAB) --> 0x123456AB || ACTUAL RESULT: %x\n", replace_byte(0x12345678, 0, 0xAB));

  return 0;
}
