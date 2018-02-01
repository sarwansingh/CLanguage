#include <stdio.h>
#include <stdlib.h>
int stack[10], tos=0;
int main()
{   int x,ch;
    printf("\t\tStack-Example\n");
    do {    // menu
            printf("1. push \n");
            printf("2. pop \n");
            printf("3. traversal  \n");
            printf("4. Exit  \n\n");
            printf("  Enter your choice \t");
            scanf("%d" ,&ch) ;

            if (ch==1){
                printf("Enter no to be pushed \t");
                scanf("%d" ,&x) ;
                push(x);
            }
            if (ch==2){ x= pop();
                if (x!=0) printf("Value Poped %d\n", x);
            }
            if (ch==3){ printf("Stack has\t");traversal();  printf("\n");   }


    }while( (ch ==1 )|| (ch==2)|| (ch==3)) ;
    return 0;
}
void traversal(){
    for (int i=(tos-1);i>=0;i--)  printf("%d\t", stack[i]);
}
void push(int x)
{
        if (tos<10){
            stack[tos]=x; tos++;
        }else printf("stack overflow \n");
}
int pop (){
    int x ;
    if (tos>0){tos--;
        x=stack[tos];
        return x;
    }else printf("stack underflow \n");
}
/*
push(10);push(20);
    printf("Stack-pop\n");
    printf("%d\t", pop());
    printf("%d\t", pop());
    */
