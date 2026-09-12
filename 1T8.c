#include <stdio.h>
int Size();
int AreaOfRectangle();
int AreaOfTriangle();
int C2F();
int SI();
int AvgSumThree();
int ExchangeVariableWT();
int ExchangeVariableWOT();
int main(){
    int choice;
    printf("============Choose==============\n");
    printf("1. Write a C program to find size of char, short int, int, long int, float, double, long double.\n"
       "2. Write a C program to calculate the area of a rectangle.\n"
       "3. Write a C program to calculate the area of a triangle.\n"
       "4. Write a C program to convert temperature from Celsius to Fahrenheit.\n"
       "5. Write a C program to calculate the simple interest.\n"
       "6. Write a C program to calculate the total and average of three numbers.\n"
       "7. Write a C program to swap two variables using a temporary variable.\n"
       "8. Write a C program to swap two variables without using a temporary variable.\n");
       printf("Your Choice : ");
       scanf("%d", &choice);
       if (choice == 1)
       {
            Size();
       }
       else if (choice == 2)
       {
            AreaOfRectangle();
       }
       else if (choice == 3)
       {
            AreaOfTriangle();
       }
       else if (choice == 4)
       {
            C2F();
       }
       else if (choice == 5)
       {
            SI();
       }
       else if (choice == 6)
       {
            AvgSumThree();
       }
       else if (choice == 7)
       {
            ExchangeVariableWT();
       }
       else if (choice == 8)
       {
            ExchangeVariableWOT();
       }
       else{
        printf("Invalid Choice");
       }
           
}
int Size(){
    printf("char=%d, short=%d, int=%d, long int=%d", sizeof(char), sizeof(short int), sizeof(int), sizeof(long int));
    printf(" float=%d, double=%d, long double=%d", sizeof(float), sizeof(double), sizeof(long double));
    return 0;
}
int AreaOfRectangle(){
    float a,l,b;
    printf("Enter l,b : ");
    scanf("%f%f",&l,&b);
    a=l*b;
    printf("Area = %f", a);
    return 0;
}
int AreaOfTriangle(){
    float a, b,h;
    printf("Enter b, h : ");
    scanf("%f%f", &b,&h);
    a=0.5*b*h;
    printf("Area = %f", a);
    return 0;
}
int C2F(){
    float c,f;
    printf("Enter c : ");
    scanf("%f", &c);
    f = 1.8*c+32;
    printf("F = %f", f);
    return 0;
}
int SI(){
    float p, r, t, s;
    printf("Enter p,r,t : ");
    scanf("%f%f%f",&p, &r,&t);
    s = p*r*t/100;
    printf("SI = %f",s);
    return 0;
}
int AvgSumThree(){
    int a,b,c,v,s;
    printf("Enter a,b,c : ");
    scanf("%d%d%d", &a, &b, &c);
    s = a+b+c;
    v = s/3;
    printf("Sum = %d, Avg = %d", s,v);
    return 0;
}
int ExchangeVariableWT(){
    int t, a, b;
    printf("Enter a, b : ");
    scanf("%d%d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("A = %d, B = %d", a,b);
    return 0;
}
int ExchangeVariableWOT(){
    int a,b;
    printf("Enter a,b : ");
    scanf("%d%d", &a, &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("A = %d, B = %d", a,b);
    return 0;
}