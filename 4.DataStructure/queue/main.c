#include <stdio.h>
#include <stdlib.h>
int queue[10],soq=0,eoq=0;

int main()
{   int ch,x;
    do {    // menu
            printf("\t\tQueue Example!\n");
            printf("1. add element to queue\n");
            printf("2. remove element from Queue\n");
            printf("3. traversal  \n");
            printf("4. Exit  \n\n");
            printf("  Enter your choice \t");
            scanf("%d" ,&ch) ;

            if (ch==1){
                printf("Enter no to be added to Queue \t");
                scanf("%d" ,&x) ;     add(x);
            }
            if (ch==2){ rmv();     }
            if (ch==3){ printf("Queue has\t");traversal();  printf("\n");   }
    }while( (ch ==1 )|| (ch==2)|| (ch==3)) ;
    //add(10);add(20);
    //rmv();rmv();rmv(); add(200);rmv();rmv();
    return 0;
}
void traversal(){
    for (int i=soq;i<eoq;i++)  printf("%d\t", queue[i]);
}
void add(int x){
    if (eoq<10){
        queue[eoq++]=x; //eoq++;
    }else printf("\n Queue full ");
}
void rmv(){
    if (soq < eoq){
        printf("\n Element %d removed", queue[soq]);
        soq++;
    }else printf("\n Queue empty ");
}
