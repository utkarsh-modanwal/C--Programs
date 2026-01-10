//program to find area of circle, triangle, square, rectangle
#include <stdio.h>
int main() {
   int choice;
  float r,b,h,side,l,area;
   printf("Type 1 to find area of circle\n");
   printf("Type 2 to find area of triangle\n");
   printf("Type 3 to find area of square\n");
   printf("Type 4 to find area of rectangle\n");
   scanf("%d", &choice);

   switch(choice) {
      case 1:
         printf("Enter radius: ");
         scanf("%f", &r);
         area = 3.14 * r * r;
         printf("Area of circle is %.2f", area);
         break;
      case 2:
         printf("Enter base and height: ");
         scanf("%f %f", &b, &h);
         area = 0.5 * b * h;
         printf("Area of triangle is %.2f", area);
         break;
      case 3:
         printf("Enter side of square: ");
         scanf("%f", &side);
         area = side * side;
         printf("Area of square is %.2f", area);
         break;
      case 4:
         printf("Enter lenght and breadth: ");
         scanf("%f %f", &l, &b);
          area = l * b;
         printf("Area of rectangle is %.2f", area);
         break;
      default:
         printf("Invalid choice");
   }

   return 0;
}