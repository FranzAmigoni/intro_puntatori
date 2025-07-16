#include <stdio.h>

int main(void) {
 int x = 5;
 int *y = 0; // puntatore - al posto di 0 scrivamo NULL
 printf("%d\n", x);

 Y = &x;  // indirizzo di memoria di x
 printf("x is stored at the address: %p\n", y);

 *y = 10;
 printf("x now is: %d\n", x);
 return 0;
}
