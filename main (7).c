

#include <stdio.h>
int squarenatural_no(int a);

int main()
{   
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The squares of first %d natural numbers are:\n",n);
    squarenatural_no(n);

    return 0;
}

int squarenatural_no(int a)
{
    if(a>0)
    {   
        squarenatural_no(a-1);
        printf(" %d",a*a);
    }
}
