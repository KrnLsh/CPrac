#include <stdio.h>
int main(){
    printf("char=%d, short=%d, int=%d, long int=%d", sizeof(char), sizeof(short int), sizeof(int), sizeof(long int));
    printf(" float=%d, double=%d, long double=%d", sizeof(float), sizeof(double), sizeof(long double));
    return 0;
}