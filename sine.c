#include<stdio.h>
#include<math.h>
int main(void)
{
	float i;
    printf("Enter value");
    scanf("%f", &i);

	if (i>0 && i<1){
		printf("sine(%f)=%f\n", i, sin(i));
	}	

return 0;
}