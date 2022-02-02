#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int m,n;
    float i,j;
    scanf("%d %d",&m,&n);
    scanf("%f %f",&i,&j);
    
    printf("%d %d\n",m+n,m-n);
    printf("%.1f %.1f",i+j,i-j);
    
    return 0;
}
