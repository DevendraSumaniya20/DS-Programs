#include<stdio.h> 
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
 struct node *header, *ptr,*ptr1, *temp;

void insert_front();
void insert_end(); 
void insert_any(); 
void delete_front(); 
void delete_end(); 
void delete_any(); 
void display();

void main()
{
    int choice; 
    int count = 1;
    header = (struct node *) malloc(sizeof(struct node)); 

    header->data = NULL;
    header->link = NULL;

    while(count == 1)
    {
        
        printf("\n1. Insert at front\n"); 
        printf("\n2. Insert at end\n"); 
        printf("\n3. Insert at any position\n"); 
        printf("\n4. Delete from front\n");
        printf("\n5. Delete from end\n");
        printf("\n6. Delete from anywhere\n");
        printf("\n7. Display linked list\n");

        printf("\nEnter your choice: "); 
        scanf("%d", &choice);

        switch(choice)
        {

            case 1:
                insert_front(); 
                break;

            case 2:
                insert_end(); 
                break;

            case 3:
                insert_any(); 
                break;

            case 4:
                delete_front();
                break;

            case 5:
                delete_end(); 
                break;

            case 6:
                delete_any(); 
                break;

            case 7:
                display(); break;
        }   
        printf("\n\nDo you want to continue? (1 / 0): "); 
        scanf("%d", &count);
    }
    getch();
}
  
void insert_front()
{
    int data_value;
    printf("\nEnter data of the node: "); 
    scanf("%d", &data_value);
    temp = (struct node *) malloc(sizeof(struct node)); 
    temp->data = data_value;
    temp->link = header->link; 
    header->link = temp;
}
 
void insert_end()
{
    int data_value;
    printf("\nEnter data of the node: "); 
    scanf("%d", &data_value);

    temp = (struct node *) malloc(sizeof(struct node));

    ptr = header;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    temp->data = data_value; 
    temp->link = ptr->link; 
    ptr->link = temp;
}
 
void insert_any()
{
    int data_value, key;

    printf("\nEnter data of the node: "); 
    scanf("%d", &data_value);

    printf("\nEnter data of the node after which new node is to be inserted: "); 
    scanf("%d", &key);

    temp = (struct node *) malloc(sizeof(struct node));

    ptr = header;

    while(ptr->link != NULL &&ptr->data != key)
    {
        ptr = ptr->link;
    }
    if(ptr->data == key)
    {
        temp->data = data_value; 
        temp->link = ptr->link; 
        ptr->link = temp;
    }
    else
    {
        printf("\nValue %d not found\n",key);
    }
}

void delete_front()
{
    if(header->link == NULL)
    {
        printf("\nEmpty Linked List. Deletion not possible.\n");
    }
    else
    {
        ptr = header->link; 
        header->link= ptr->link; 
        free(ptr);
        printf("\nNode deleted from the front.\n");
    }
}
  
void delete_end()
{
    if(header->link == NULL)
    {
        printf("\nEmpty Linked List. Deletion not possible.\n");
    }
    else
    {
        ptr = header;
        while(ptr->link != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->link;
        }
        ptr1->link = ptr->link; 
        free(ptr);
        printf("\nNode deleted from the end.\n");
    }
}

void delete_any()
{
    int key;
    if(header->link == NULL)
    {
        printf("\nEmpty Linked List. Deletion not possible.\n");
    }
    else
    {
        printf("\nEnter the data of the node to be deleted: "); 
        scanf("%d", &key);

        ptr = header;
        while((ptr->link != NULL) && (ptr->data != key))
        {
            ptr1 = ptr;
            ptr = ptr->link;
        }
        if(ptr->data == key)
        {
            ptr1->link = ptr->link; 
            free(ptr);
            printf("\nNode with data %d deleted.\n", key);
        }
        else
        {
            printf("\nValue %d not found. Deletion not possible.\n", key);
        }
    }
}

void display()
{
    printf("\nContents of the linked list are: \n");

    ptr = header;
    while(ptr->link != NULL)
    {
        ptr = ptr->link; 
        printf("%d ", ptr->data);
    }
}