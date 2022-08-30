

#include <stdio.h>
#include<math.h>
int dectobin_no(int a);

int main()
{   
    int n;
    
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The octal of the given decimal number is:\n");
    dectobin_no(n);

    return 0;
}

int dectobin_no(int a)
{   
    if(a>0)
    {   
       dectobin_no(a/8);
       printf("%d",a%8);
        
    }
    
    
}
