#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 

typedef struct node 
{ 
    int data;
    struct node *link;
} NODE;

void Insert(int); 
int Delete(); 
void Display();
NODE *front, *rear; 

/* Global Declarations */

void main() 
{
    /* Main Program */ 
    int opn, elem;
    front = rear = NULL; 

        printf("\n --- Linked List Implementation of QUEUE Operations --- \n\n"); 
    do 
    {
        printf("\n \n 1-Insert,\n 2-Delete,\n3-Display,\n4-Exit\n");

        printf("\n Your option : "); 
        scanf("%d", &opn); 

        switch (opn) 
        {
            case 1:
                printf("\n\n Enter the Element to be Inserted :"); 
                scanf("%d", &elem);
                Insert(elem); 
                break;

            case 2:
                elem = Delete(); 
                if (elem != -1)
                    printf(" Deleted Node(From Front)with the Data: %d\n", elem); 
                break;

            case 3:
                printf("Your Queue:\n"); 
                Display();
                break; 
            case 4:
                printf("\n\n Terminating \n\n"); 
                break;
            default:
                printf("\n\nInvalid Option !!! Try Again !! \n\n"); 
                break;
        }
    getch();
    } while (opn != 4);
}

void Insert(int info) 
{ 
    NODE *temp;
    temp = (NODE *) malloc(sizeof(NODE)); 
    if (temp == NULL)
    printf(" Out of Memory !! Overflow !!!"); 
    else 
    {
        temp->data = info; 
        temp->link = NULL; 
        if (front == NULL) 
        { 
            front = rear = temp;
        } /* First Node? */ 
        else 
        {
            rear->link = temp; 
            rear = temp;
        } /* Insert End */
        printf(" Node has been inserted at End Successfully !!");
    }
}

int Delete() 
{ 
    int info; 
    NODE *t;
    if (front == NULL) 
    { 
        printf(" Underflow!!!"); return -1;
    } 
    else {
        t = front;
        info = front->data; 
        if (front == rear) 
            rear = NULL; 
        front = front->link;
        t->link = NULL; 
        free(t);
        return (info);
    }
}

void Display() 
{ 
    NODE *t;
    if (front == NULL) 
        printf("Empty Queue\n"); 
    else 
    {    
        t = front; 
        printf("Front->"); 
        while (t) 
        {
            printf("[%d]->", t->data); 
            t = t->link;
        }
        printf("Rear\n");
    }
}