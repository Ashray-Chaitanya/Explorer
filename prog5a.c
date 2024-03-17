#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int res,top,s[];
double compute(char ch,double op1,double op2)
{
  switch(ch)
  {
    case '+' : res = op1+op2; 
    break;
    case '-' : res = op1-op2; 
    break;
    case '*' : res = op1*op2; 
    break;
    case '/' : res = op1/op2; 
    break;
    case '$' : 
    case '^' : res = pow(op1,op2); 
    break;
    default: 
    break;
  }
}

void main()
{
int i,symbol;double op1,op2;
char postfix[10],infix[10];
printf("Enter postfix expression");
gets(postfix);
for(i=0;i<strlen(postfix);i++)
{
    symbol=postfix[i];
   
    if(isdigit(symbol))
     s[++top]=symbol-'0';
     
    else
    {   op2=s[top--];
        op1=s[top--];
        compute(symbol,op1,op2);
        s[++top]=res;
    }
}
res=s[top--];
printf("The result is %d",res);
}