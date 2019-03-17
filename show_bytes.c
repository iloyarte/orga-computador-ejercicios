/***
Fuente: Randal E. Bryant, David R. O’Hallaron, Computer Systems: A Programmer’s Perspective (3.ª ed.), Pearson (2016). Página 81
***/

#include <stdio.h>

typedef unsigned char *byte_pointer;

int main() {
    printf("Hello World");
    return 0;
}

void show_bytes(byte_pointer start, size_t len){
  int i;
  for (i = 0; i < len; i++){
      printf("%.2x",start[i] );
  }
  printf("\n");
}

void show_int(int x){
  show_bytes((byte_pointer) &x, sizeof(int))
}

void show_int(float x){
  show_bytes((byte_pointer) &x, sizeof(float))
}

void show_int(void *x){
  show_bytes((byte_pointer) &x, sizeof(void *))
}
