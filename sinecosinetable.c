#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void){ 
    double interval;
    double i;
    for(i = 0; i<=1; i=i+0.1)
    {
   
    printf("sin( %lf ) = %lf \n", i, fabs(sin(i)));
   
    }
    for(i = 0; i<=1; i=i+0.1)
    {
    
   
    printf("cosine( %lf ) = %lf \n", i, fabs(cos(i)));
   
    }


    printf("\n+++++++\n");
    return 0;
}