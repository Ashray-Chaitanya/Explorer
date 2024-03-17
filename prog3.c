#include<stdio.h>
#define MAX 4
int stack[MAX], item;
int ch, top = -1;

/*PUSH */
void push()
    {
if (top == (MAX-1))
    printf("\n\nStack is Overflow");
else
    stack[++top]=item;
    }
   
/*POP */
void pop()
{
    if(top == -1)
        printf("\n\nStack is Underflow");
    else
        printf("\n Popped element is %d",stack[top--]);
    
}
/* PALINDROME */

void palindrome()
    {
    int flag=1,i;
    printf(" Stack contents are:\n");
    for(i=top; i>=0; i--)
    printf("|%d|\n",stack[i]);
    printf("\n Reverse of stack content are:\n");
    for(i=0;i<=top;i++)
    printf("|%d|\n",stack[i]);
    for(i=0;i<=top/2;i++)
{
    if(stack[i]!=stack[top-i])
        flag=0;break;
}
if(flag==1)
    printf("palindrome");
else
    printf("Not a palindrome");
}

void display()
{
int i;
if(top == -1)
    printf("\nStack is Empty");
else
{
    printf("stack contents are\n");
    for(i=top; i>=0; i--)
    printf("\n ------\n| %d |", stack[i]);
    printf("\n");
}
}
void main()
    {
    while(1)
    {
      printf("\n\n----MAIN MENU----\n");
      printf("\n1. PUSH (Insert) in the Stack");
      printf("\n2. POP (Delete) from the Stack");
      printf("\n3. PALINDROME check using Stack");
      printf("\n4. DISPLAY the contents of Stack");
      printf("\n5. Exit (End the Execution)");
      printf("\nEnter Your Choice: ");
      scanf("%d", &ch);

switch(ch) 
     {
       case 1: printf("\nEnter a element to be pushed: ");
       scanf("%d", &item);
       push(item);
       display();
                   break;
       case 2:pop();
                   break;
       case 3:palindrome();
                   break;
       case 4: display();
                   break;
       case 5:exit(1);
                    break;

       default: printf("\n Invalid choice");
                    break;
                
          }
     }
    }
    
