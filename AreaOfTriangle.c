#include <stdio.h>
int main(){
    float a, b,h;
    printf("Enter b, h : ");
    scanf("%f%f", &b,&h);
    a=0.5*b*h;
    printf("Area = %f", a);
    return 0;
}