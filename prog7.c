#include <stdio.h>
#include <stdlib.h>
int MAX = 4, count = 0;
struct student
{
  char usn[10];
  char name[30];
  char branch[5];
  int sem;
  char phno[10];
  struct student *next;
};
typedef struct student *NODE;

NODE getnode(NODE head)
{
  NODE newnode;
  newnode = (NODE)malloc(sizeof(struct student));
  printf("\nEnter USN, Name, Branch, Sem, Ph.No\n");
  scanf("%s", newnode->usn);
  scanf("%s", newnode->name);
  scanf("%s", newnode->branch);
  scanf("%d", &(newnode->sem));
  scanf("%s", newnode->phno);
  newnode->next = NULL;
  head = newnode;count++;
  return head;
}
NODE display(NODE head, int n)
{
  NODE p;
  if (head == NULL)
    printf("\n No student data\n");
  else
  {
    p = head;
    printf("\n----STUDENT DATA----\n");
    printf("\nUSN\tNAME\t\tBRANCH\tSEM\tPh.NO.");
    while (p != NULL)
    {
      printf("\n%s\t%s\t\t%s\t%d\t%s", p->usn, p->name, p->branch, p->sem, p->phno);
      p = p->next;
    }
    printf("\n The no. of nodes in list is: %d", n);
  }
  return head;
}
NODE create(NODE head)
{
  NODE newnode;
  if (head == NULL)
  {
    newnode = getnode(head);
    head = newnode;
  }
  else
  {
    newnode = getnode(head);
    newnode->next = head;
    head = newnode;
  }
  return head;
}
NODE insert_front(NODE head)
{
  if (count == MAX)
    printf("\nList is Full / Overflow!!");
  else
  {
    head = create(head); // create()insert nodes at front
    count++;
  }
  return head;
}
NODE insert_rear(NODE head)
{
  NODE p, newnode;
  p = head;
  if (count == MAX)
    printf("\nList is Full(QUEUE)!!");
  else
  {
    if (head == NULL)
    {
      newnode = getnode(head);
      head = newnode; // set first node to be head
      count++;
    }
    else
    {
      newnode = getnode(head);
      while (p->next != NULL)
      {
        p = p->next;
      }
      p->next = newnode;
      count++;
    }
  }
  return head;
}
NODE delete_front(NODE head)
{
  NODE p;
  if (head == NULL)
    printf("\nList is Empty/Underflow(STACK)");
  else
  {
    p = head;
    p = p->next; // Set 2nd NODE as head free(p);
    printf("\n Front(first)node is deleted");
  }
  return head;
}
NODE delete_rear(NODE head)
{
  NODE p, q;
  p = head;
  q = NULL;
  while (p->next != NULL)
  {
    q = p;
    p = p->next; 
  }
  q->next = NULL;
  free(p); 
  p->next = NULL;
  printf("\n Last(end) entry is deleted");
  return head;
}

NODE stack(NODE head)
{
  int ch;
  do
  {
    printf("\nSSL used as Stack...");
    printf("\n 1.Insert at Front(PUSH) \t 2.Delete from Front(POP))\t3.Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      head = insert_front(head);
      break;
    case 2:
      head = delete_front(head);
      break;
    case 3:
      break;
    }

  } while (ch != 3);
  return head;
}
void main()
{
  int ch, i, n;
  NODE head;
  head = NULL;
  printf("\n----------Studednt Database-----------");
  while(1)
  {
    printf("\n 1.Create\t 2.Display\t 3.Insert Front\t4.Insert End \t 5.Delete Front\t6. Delete End\t \t 7.Stack\t 8.Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      printf("\nHow many student data you want to create: ");
      scanf("%d", &n);
      for (i = 0; i < n; i++)
        head = create(head);
      break;
    case 2:
      head = display(head, n);
      break;
    case 3:
      head = insert_front(head);
      break;
    case 4:
      head = insert_rear(head);
      break;
      
    case 5:
      head = delete_front(head);
      break;
    case 6:
      head = delete_rear(head);
      break;
    case 7:
      head = stack(head);
      break;
    case 8:
      exit(0); 
      default: break;
    }
  } 
}