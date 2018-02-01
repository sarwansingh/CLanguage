#include <stdio.h>
#include <stdlib.h>
int fact(int i){
    if (i==1) return(1);
    else return (i* fact(i-1));
}
int main()
{   int  n,c,f =1;
    scanf("%d", &n);
    // with recursion
    f  = fact(5); printf("factorial =\t%d",f );
    return 0;
}
// without recursion
    //for (c=1;c<=n;c++){ fact=fact*c; }

