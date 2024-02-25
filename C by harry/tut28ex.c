/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern


*****
****
***
**
* -> Reversed triangular star pattern

*/

#include <stdio.h>
#include <ctype.h>
void nstar(int z)
{
    int i, j;
    for (j = 0; j < z; j++)
    {
        for (i = 0; i <= j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void rstar(int z)
{
    int i, j;
    for (j = z; j > 0; j--)
    {
        for (i = 0; i < j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    
    int a , n  ;
    while(1)
    {    
    selection:
    printf("Please enter 0 for normal triangle and 1 for reverse triangle:\n");
    scanf("%d", &a);
    

    if(a==0 || a==1)
    {
        printf("Please Enter the height of the triangle:\n");
        scanf("%d", &n);

        switch (a)
        {
        case 0:
            nstar(n);
            break;
        case 1:
            rstar(n);
            break;

        default:
            printf("I don't even know how you broke this program but let's start from the start\n");
            goto selection;
        }
    }
   
    else 
    {
        printf("Please select only 1 or 0\n");
        goto selection;
    }
    }
    return 0;
}
