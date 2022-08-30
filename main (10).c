

#include <stdio.h>
#include<math.h>
int reverse(int a);

int main()
{   
    int n;
    
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The reverse of the given number is:\n");
    reverse(n);

    return 0;
}

int reverse(int a)
{   
    if(a>0)
    {   
       printf("%d",a%10);
       reverse(a/10);
       
        
    }
    
    
}
