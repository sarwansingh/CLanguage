#include <stdio.h>
#include <stdlib.h>

int main()
{   int i=10;
    int *iptr; iptr =&i;
    int **iiptr = &iptr;
    printf("i=%d\n",i);
    printf("&i=%d\n",&i);
    printf("iptr=%d\n",iptr);
    printf("&iptr=%d\n",&iptr);
    printf("iiptr=%d\n",iiptr);
    *iptr=100;
//    *iptr=100;
       printf("i=%d\n",i);
//    printf("&i=%d\n",&i);
//    printf("iptr=%d\n",iptr);
    return 0;
}
/*
int *iptr; iptr =&i;
    char c='a', *cptr=&c;
    printf("sizeof(iptr)=%d\n",sizeof(iptr));
    printf("sizeof(cptr)=%d\n",sizeof(cptr));

*/
