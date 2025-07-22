#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *array;
};

void push(struct stack *sp)
{
    if(sp->top == sp->size-1)
    {
        printf("\nstack overflow");
    }
    else
    {
        int no;
        printf("\nEnter value :");
        scanf("%d",&no);
        sp->top = sp->top + 1;
        sp->array[sp->top] = no;
        printf("\n%d is inserted at position %d",no,sp->top);
    }
}

void pop(struct stack *sp)
{
    int no;
    if(sp->top == -1)
    {
        printf("\nstack underflow");
    }
    else
    {
        no = sp->array[sp->top];
        sp->top = sp->top - 1;
        printf("\n%d is deleted from position %d",no,sp->top+1);

    }
}
void peep(struct stack *sp)
{
   int p;
   printf("\nEnter the position : ");
   scanf("%d",&p);
   if(sp->top-p<=-1)
   {
      printf("\nSTACK is overflow !!!");
   }
   else
   {
      printf("\nThe Elements is : %d",sp->array[sp->top-p]);
   }
}
void change(struct stack *sp)
{
  int v1,v2;
  printf("\nEnter Position for change : ");
  scanf("%d",&v1);
  printf("\nEneter the Number for change : ");
  scanf("%d",&v2);
  if(sp->top-v1<=-1)
  {
     printf("\nSTACK is overflow !!!");
  }
  else
  {
    sp->array[sp->top-v1]=v2;
    printf("\nCHANGE successfull !!!");
  }
}
void display(struct stack *sp)
{
    int i;
    for(i=0;i<=sp->top;i++)
    {
        printf("\n position %d : %d",i,sp->array[i]);
    }
}

void main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 100;
    s->array = (int *)malloc(s->size * sizeof(int));
    int ch,no;
    
    while(ch != 6)
    {
        printf("\nTop : %d",s->top);
        printf("\n\n1. PUSH\n2. POP\n3. PEEP\n4. CHANGE\n5. DISPLAY\n6. EXIT");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: 
                push(s);
                break;

            case 2: 
                pop(s);
                break;
            
            case 3:
                if(s->top == -1)
                {
                    printf("stack is empty");
                }
                else
                {
                    peep(s);
                }
                break;
            case 4:
                if(s->top == -1)
                {
                    printf("stack is empty");
                }
                else
                {
                    change(s);
                }
                break;
            case 5:
                display(s);
                break;
            default:
                printf("enter valid choice...");
        
        } 
    } 
    free;   
}
