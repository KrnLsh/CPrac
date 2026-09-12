#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void AreaRectangle();
void AreaCircle();
bool CheckEvenOdd(double value);
void PrintPrime(int limit);
bool helpherPrime(int variable);
void main(){
    int choice;
    printf("Choose\n");
    printf("1) Area of a Rectangle\n");
    printf("2) Area of a Circle\n");
    printf("3) Check Even or ODD\n");
    printf("4) Print Primes up until a Limit\n");
    printf("Enter your Choice : ");
    scanf("%d", &choice);
    printf("You Choosed : %d", choice);
    if (choice == 1)
    {
        AreaRectangle();
    }
    else if(choice == 2){
        AreaCircle();
    }
    else if(choice == 3){
        printf("\nEnter the Number to check : ");
        double value;
        scanf("%lf", &value);
        bool check = CheckEvenOdd(value);
        if(check == 1){
            printf("Number is Even");
        }
        else{
            printf("Number is Odd");
        }
    }
    else if(choice ==4){
        int limit;
        printf("Enter the Limit : ");
        scanf("%d", &limit);

    }
}
void AreaRectangle(){
    int lenght, breath;
    printf("\nEnter Length of Rectangle : ");
    scanf("%d",&lenght);
    printf("Enter Breath of Rectangle : ");
    scanf("%d",&breath);
    int area = lenght*breath;
    printf("Area of Rectangle : %d", area);
}
void AreaCircle(){
    int radius;
    printf("\nEnter the Radius of Circle : ");
    scanf("%d", &radius);
    double area = 3.14*radius*radius;
    printf("Area of Circle is : %lf", area);
}
bool CheckEvenOdd(double value){
    if (fmod(value, 2.0) == 0)
    {
        return true;
    }
    else{
        return false;
    }
    
}
void PrintPrime(int limit){
    
}
bool helperPrime(int variable){
    if(variable<=1){
        return false;
    }
    else if(variable==2){
        return true;
    }
    else if(variable>2){
        int loop = 2;
        while (loop<variable)
        {
            if (variable%loop == 0)
            {
                return false;
            }
            else{
                return false;
            }
            
        }
        
    }
}