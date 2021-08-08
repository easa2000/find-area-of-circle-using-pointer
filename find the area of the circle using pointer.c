find area of circle using pointer

#include<stdio.h>
void main()
{
    double radius, area = 0.0;
    double *pradius = &radius, *parea = &area;
    printf("\n Enter the radius of the circle: ");
    scanf("%lf",pradius);
    *parea = 3.14 * (*pradius) * (*pradius);
    printf("\n The area of the circle with radius %.2lf = %.2lf",*pradius,*parea);
}
