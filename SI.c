#include <stdio.h>
int main(){
    float p, r, t, s;
    printf("Enter p,r,t : ");
    scanf("%f%f%f",&p, &r,&t);
    s = p*r*t/100;
    printf("SI = %f",s);
    return 0;
}