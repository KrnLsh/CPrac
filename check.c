#include <stdio.h>
int main(void) {
    int a = 0, b = 2, c = 5;
    int res = a++ && ++b || c++;
    printf("a = %d, b = %d, c = %d, res = %d\n", a, b, c, res);
    return 0;
}