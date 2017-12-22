#include <stdio.h>
#include <stdlib.h>



int stack[50];
int i=-1;

void push() /* Adding an inserted element to the stack */
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
        printf("There is no place on the stack!\n"); /* Check for stack overflow */
    }
}

int pop() /* Deleting the desired item from the stack */
{
    int elem;
    if(i==-1)
    {
        printf("Stack is empty!\n"); /* Testing on an empty stack */
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
    int a, j;
    while(a!=3) /* Managing the stack */
    {
       printf("Enter '1' to put on the stack\nEnter '2' to delete the stack element\nEnter '3' to exit\n");
       scanf("%d",&a);
       if(a==1) /* Checking the entered digit */
           push();
       else
       {
           if(a==2)
              pop();
           else
              if(a!=3)
                 printf("Error!\n");
       }
    }
    if(i>-1)
        printf("Your stack:\n");
    else
        printf("Stack is empty!The work is completed!\n");
    for (j = i; j >= 0; j--) /* The output of the stack before the program terminates */
		{
			printf("%d ", stack[j]);
		}
    return 0;
}
