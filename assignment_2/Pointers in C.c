#include <stdio.h>

    void update(int *a, int*b);

int main(){
     int a,b; 
     int *pa=&a ,*pb=&b;
     scanf("%d %d",&a,&b); 
     update(pa,pb);

}
   void update(int *a,int *b)
   {
        int res1,res2; 
        res1=*a+*b; 
        if(*a>*b){ res2=*a-*b; 

    }
         else 
         { res2=*b-*a;}
          printf("%d\n%d",res1,res2);
     }

