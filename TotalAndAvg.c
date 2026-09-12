#include <stdio.h>
int main(){
    int a,b,c,v,s;
    printf("Enter a,b,c : ");
    scanf("%d%d%d", &a, &b, &c);
    s = a+b+c;
    v = s/3;
    printf("Sum = %d, Avg = %d", s,v);
    return 0;
}