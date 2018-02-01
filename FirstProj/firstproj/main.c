#include <stdio.h>
#include <stdlib.h>

int main()
{    int  n=5,j,k;
    //int j=;  //1010100
    j=scanf("%d%d",&n,&k);
    printf("\n%d\n",j);
    (n & 1)? j=printf("Odd  p")  : printf("even")     ;
    printf("\n%d\n",j);
    //if ( j==1) printf("Odd");
    //else printf("even");
    return 0;
}
