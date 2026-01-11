#include <stdio.h>
//call by value
void callByValue(int x) {
   x = x+10;
   printf("Inside call by value, x = %d\n", x);
}
//call by reference
void callByReference(int *y) {
   *y = *y+10;
   printf("Inside call by reference, y = %d\n", *y);
}
int main() {
   int a = 10;
   printf("Before function call, a = %d\n", a);
   
   callByValue(a); //value pass
   printf("After Call by value, a = %d\n", a);

   callByReference(&a); //address pass
   printf("After Call by Reference, a = %d\n", a);
   return 0;
}