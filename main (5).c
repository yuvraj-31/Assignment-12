

#include <stdio.h>
int evennatural_no(int a);

int main()
{   
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The first %d even natural numbers are:\n",n);
    evennatural_no(2*n);

    return 0;
}

int evennatural_no(int a)
{
    if(a>0)
    {   
        
        evennatural_no(a-1);
         if(a%2==0)
        {
        printf(" %d",a);
        }
        
       
        
        
    }
}
