#include<stdio.h>
int main(){
    float a , b ,c , d , e;
    printf("Enter 1st Number :");
    scanf("%f" , &a);
    printf("Enter 2nd Number :");
    scanf("%f" , &b);
    printf("Enter 3rd Number :");
    scanf("%f" , &c);
    printf("Enter 4th Number :");
    scanf("%f" , &d);
    printf("Enter 5th Number :");
    scanf("%f" , &e);
    
    float avg = (a + b + c + d + e)/2;
    
    printf("Average Of Entered Numbers : %f" , avg);
    return 0;
}
