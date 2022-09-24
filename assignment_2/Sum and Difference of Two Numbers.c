#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1 ;
    int num2 ;
    float num3 ;
    float num4 ;
    
scanf("%d", &num1);
scanf("%d", &num2);
scanf("%f", &num3);
scanf("%f", &num4);

int add1 = num1 + num2;
int sub1 = num1 - num2;

printf("%d %d\n" , add1 , sub1);

float add2 = num3 + num4;
float sub2 = num3 - num4;

printf("%0.1f %0.1f " , add2 , sub2 );


return 0;
}
