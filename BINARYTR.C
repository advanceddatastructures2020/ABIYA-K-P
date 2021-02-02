#include<stdio.h>
#include<conio.h>
struct btnode
{
int value;
struct btnode *l;
struct btnode *r;
}*root=NULL, *temp=NULL, *t2, *t1;
void insert();
void create();
void delete1();
int flag=1;
void main()
{
int ch;
printf("\n operations\n");
printf("\n insert an element in to the tree");
printf("\n delete an element into the tree");
printf("Exit");
while(1)
{
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
Exit(0);
default:
printf("Wrong choice,please enter correct choice");
break;
}
}
}
void insert()
{
create();
if(root==NULL)
root=temp;
else
search(root);
}
void create()
{
int data;
printf("enter data of node to be inserted:");
scanf("%d",&data);
temp=(struct btnode *)malloc(1 *sizeof(struct btnode));
temp->value=data;
temp->l=temp->r=NULL;
}
void delete1()
{
int data;
if(root==NULL)
{
printf("No elements in a tree to delete");
return;
}
printf("Enter the data to be deleted");
scanf("%d",&data);
t1=root;
t2=root;
search1(root,data);
}
