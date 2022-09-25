#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main(){

char arr[][20] = {"one","two","three","four","five","six","seven","eight","nine"};
 int num; 
 scanf("%d",&num);

if(num>=1 && num <=9){
     printf("%s",arr[num-1]);

} else{ 
    printf("Greater than 9");

} return 0; }
