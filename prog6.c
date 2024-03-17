#include <stdio.h>
#define MAX 4
int ch, front = 0, rear = -1, count = 0, q[MAX], item;
void insert(item)
{
  if (count == MAX)
    printf("Circular Queue is Full\n");
  else
{
    rear = (rear + 1) % MAX;
    q[rear] = item;count++;
  }
}
void del()
{
  if (count == 0)
    printf("Circular Queue is underflow\n");
  else
  {
    printf("\nDeleted item is: %d",q[front]);
    front = (front + 1) % MAX;count--;
  }
}
void display()
{
  int i;
  if (count == 0)
    printf("\nCircular Queue is Empty");
  else
  {
    int temp=front;
    printf("\nContents of Circualr Queue is:\n");
    for (i = 1; i <= count; i++)
    {
      printf("%d\t", q[temp]);
      temp = (temp+1) % MAX;
    }
  }
}
void main()
{
 while(1)
  {
    printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit");
    printf("\nEnter the choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      printf("\nEnter the item to be inserted: ");
      scanf("%d", &item);
      insert(item);break;
    case 2:
      del();break;
    case 3:
    display();break;
    case 4:
      exit(0);
    }
  } 
}