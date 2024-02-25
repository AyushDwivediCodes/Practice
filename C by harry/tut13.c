#include <stdio.h>

int main()
{
    int num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", num );
        num-=1;
    } while (index < num);

    return 0;
}
//I changed the program to print numbers in reverse