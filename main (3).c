

#include <stdio.h>
int oddnatural_no(int a);

int main()
{   
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The first %d odd natural numbers are:\n",n);
    oddnatural_no(2*n);

    return 0;
}

int oddnatural_no(int a)
{
    if(a>0)
    {   
        
        oddnatural_no(a-1);
        if(a%2!=0)
        {
        printf(" %d",a);
        }
        
        
    }
}
