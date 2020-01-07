#include <stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    struct Node *next;
};
struct Node *root = NULL; int ch,x;
int main()
{   do {    // menu
            printf("\t\tLink List Example!\n");
            printf("1. add element at start\n");
            printf("2. add element at end\n");
            printf("3. remove element at start  \n");
            printf("4. remove element at end  \n");
            printf("5. traversal  \n");
            printf("6. Exit  \n\n");
            printf("  Enter your choice \t");
            scanf("%d" ,&ch) ;

            if (ch==1){
                printf("Enter no to be added   \t");
                scanf("%d" ,&x) ;     add_node_atstart(x);
            }
            if (ch==2){
                printf("Enter no to be added   \t");
                scanf("%d" ,&x) ;     add_node_atend(x);
            }
            if (ch==3){  delete_node_atstart()  ;   }
            if (ch==4) {  delete_node_atend  ();   }
            if (ch==5) { printf("Link List has\t");
                traversal();  printf("\n");
            }
    }while( (ch >=1 ) &&(ch<=5)) ;
    return 0;
}
void add_node_atend(int x){
    struct Node *nptr,*ptr=root ;
    nptr=  (struct Node *) malloc(sizeof(struct Node));
    // initialze the values
    nptr->val=x;  nptr->next = NULL;
    if (root == NULL )  root = nptr;
    else {
            while(ptr->next != NULL){ ptr= ptr->next; }
            ptr->next = nptr;
    }
}
void delete_node_atstart (){
    struct Node *ptr;
    if (root !=NULL ) { ptr  = root;
                        printf("%d \t", ptr->val);
                        root = root->next;
                        free(ptr);
    } else printf("\nLink List is empty \t");
}
void delete_node_atend (){
    struct Node *ptr,*pptr;
    if (root !=NULL ) {
        ptr  = root; pptr=ptr;//start ptr from root
        while( ptr->next != NULL )
        {   printf("\npptr= %d \tptr = %d", pptr, ptr);
            pptr=ptr;  ptr=ptr->next;
        }
        // go to the end of the list till ->next is NULL
        printf("\nElement to be deleted = %d \t", ptr->val);
        pptr->next=NULL;
        free(ptr);
    } else printf("\nLink List is empty \t");
}
void traversal(){
    struct Node *ptr = root;
    while(ptr  != NULL){
        printf("%d \t", ptr->val);
        ptr = ptr->next  ;
    }
}
void add_node_atstart(int x){
    struct Node *nptr ;
    nptr=  (struct Node *) malloc(sizeof(struct Node));
    // initialze the values
    nptr->val=x;  nptr->next = NULL;
    if (root == NULL )  root = nptr;
    else { nptr->next = root; root = nptr; }
}
