#include <stdio.h> 
int main() {
   float celsius, farhenheit, kelvin;
   printf("Enter  temperature in celsius: ");
   scanf("%f", &celsius);
   farhenheit = (celsius * 9/5) + 32;
   kelvin = celsius + 273;

   printf("Temperature in farhenheit is %.2f\n", farhenheit);
   printf("Temperature in kelvin is %.2f", kelvin);

   return 0;

}