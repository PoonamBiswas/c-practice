#include<stdio.h>
#include<stdlib.h>
int stack[3];
int MAX=3;
int top = -1;
void push(int item)
{
    if (top<MAX)
    {
        top++;
        stack[top] = item; 
        int i;
    for(i = 0; i <= top ; i++ )
    {
        printf("\t %d \t",stack[i]);
        
    }
    }
    else
    {
        printf("\n***OVERFLOW***\n");
    }
}
void pop()  
{   
    int temp;
    if(top!=-1)
    {
        temp = stack[top];
        top--;
        int i;
    for(i = 0; i <= top ; i++ )
    {
        printf("\t %d \t",stack[i]);
        
    }
    }
    else 
    {
        printf ("\n ***UNDERFLOW***\n");
        
    }
}

void trav()
{
    int i;
    for(i = 0; i <= top ; i++ )
    {
        printf("\t %d \t",stack[i]);
        
    }
}
int main()
{
    int choice, item1;
    while(1)
    {
        printf("\n 1 : PUSH \n 2 : POP \n 3 : TRAVERSE \n 4 : EXIT \n ENTER CHOICE FROM ABOVE OPTIONS: \n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1 : 
                printf("\n Enter ITEM : \n");
                scanf("%d", &item1);
                push(item1);
                break;
            case 2 :
                pop();
                break;
            case 3 :
                trav();
                break;
            case 4 :
                exit(0);
        }
    }
    return 0;
}