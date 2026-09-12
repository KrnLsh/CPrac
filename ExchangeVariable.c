#include <stdio.h>
int main(){
    int t, a, b;
    printf("Enter a, b : ");
    scanf("%d%d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("A = %d, B = %d", a,b);
    return 0;
}