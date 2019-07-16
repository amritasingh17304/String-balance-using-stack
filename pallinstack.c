#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define cap 100
char stack(cap);
int top=-1;
int front=0;
void push(char a)
{
	if(top!=cap-1)
	{
		top++;
		stack[top]=a;
	}
}
void pop()
{
	if(top!=-1)
	{
		char m;
		m=stack[top--];
	}
}
void main()
{
	int i,j,k;
	char ch[100];
	printf("Enter a string \n");
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		push(ch[i]);
	}
	for(i=0;i<strlen(ch)/2;i++)
	{
		if(stack[top]==stack[front])
		{
			pop();
			front++;
		}
		else
		{
			printf("String is unbalanced\n");
			break;
		}
	}
	if(strlen(ch)/2==front)
	{
		printf("The string is balanced\n");
		break;
	}
}
