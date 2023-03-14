//wap to print fractional part of real number

#include <stdio.h>
int main(){
    float a =5.7;
    printf("enter the real number ");
    scanf("%f",&a);    
    int b=a;
    float c=a-b;
    printf("fractional part of real number %f  ",c);
    return 0;
}