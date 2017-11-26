#include <stdio.h>
#include <stdlib.h>



int stack[50];
int i=-1;

void push()
{
    int elem;
    i++;
    printf("Enter the number\n");
    if(i<50)
    {
        scanf("%d",&elem);
        stack[i]=elem;
    }
    else
    {
        printf("There is no place on the stack!\n");
    }
}

int pop()
{
    int elem;
    if(i==-1)
    {
        printf("Stack is empty!\n");
        return(i);
    }
    else
    {
        elem=stack[i];
        printf("The number %d was removed from the stack\n",stack[i]);
        i--;
    }
    return elem;
}
int main ()
{
    int enter, j;
    while(enter!=3)
    {
       printf("Enter '1' to put on the stack\nEnter '2' to delete the stack element\nEnter '3' to exit\n");
       scanf("%d",&enter);
       if(enter==1)
           push();
       else
       {
           if(enter==2)
              pop();
           else
              if(enter!=3)
                 printf("Error!\n");
       }
    }
    if(i>-1)
        printf("Your stack:\n");
    else
        printf("Stack is empty!The work is completed!\n");
    for (j = i; j >= 0; j--)
		{
			printf("%d ", stack[j]);
		}
    return 0;
}
