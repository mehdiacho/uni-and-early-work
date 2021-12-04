#include <stdio.h>
void Area(float rad);
void Perimeter(float rad);
int main()
{
    float radius;
    printf("Enter radius of circle:");
    scanf("%f", &radius);
    
    Area(radius);
    Perimeter(radius);
  
    return 0;
}

void Area(float rad)
{
    const double Pi =  3.14;
    float a = Pi*rad*rad;
    printf("Area of the circle is: %3.2f\n", a);
}
void Perimeter(float rad)
{
    const double Pi = 3.14;
    float p = 2*Pi*rad;
    printf("Perimeter of the circle is: %3.2f", p);
}
