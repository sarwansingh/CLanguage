#include <stdio.h>
#include <stdlib.h>
int arr2[3][3] ={1 ,2 ,3 ,4 ,5 ,6 ,7,8,9}
    ,arr1[3][3]={{10,20,30}, {0,1,2}, {40,50,60} }
    , result[3][3];
int main()
{   int r,c,i;
    // PRINTING TWO DIMENTIONAL ARRAY
    for (r=0;r<3;r++){
        for (c=0;c<3;c++){  printf("%d \t",arr1[r][c]);}
        printf(" \n");
    }printf(" \n");
    for (r=0;r<3;r++){
        for (c=0;c<3;c++){  printf("%d \t",arr2[r][c]);}
        printf(" \n");
    }   printf(" \n");
     for (r=0;r<3;r++){ // adding two dimensional arrays
         for (c=0;c<3;c++){
             result[r][c]=0;
            for (i=0;i<3;i++){
                    result[r][c] += arr1[r][i]*arr2[i][c];
            }
            printf("%d \t",result[r][c]);
        }// ends for (c=0
        printf(" \n");
     } // ends for (r=0

    return 0;
}

//for (r=0;r<3;r++){
//        for (c=0;c<3;c++){  scanf("%d",&arr2[r][c]);}
//    }


/** \brief
 *
 * \param
 * \param
 * \return
 *int n,i,r,c,b;
 int bin(int );
    printf("Enter no\n");
    scanf("%d",&n);
    //bin(n);
//    i=0; b=0; c=1;//prints binary in correct order
//    while(n>0){
//        r=n%2;
//        b=b+r*c;  c=c*10;
//        n=n/2;
//    }
    printf("%d",bin_recursion(n));
 */

