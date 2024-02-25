#include <stdio.h>

// maths and science - 45
// science - 15
// maths - 15

// print the type of gift you are giving to them

int main()

{
    int maths , science ;

    printf ("Write your marks of science\n");
 
    scanf("%d" , &maths );

    printf ("Write your marks of maths\n");

    scanf ("%d" , &science );
    
    printf ("you have entered your science marks as %d and your maths marks as %d \n" , science , maths );
    if ( science>=33 && maths>=33 )
    {
        printf ("you will receive 45 rupees");
    }
    
    else if ( maths<33, science>=33 ) 
    {
        printf("you will receive 15 rupees");
    }

    else if ( science<33, maths>=33 )
    {
        printf("you will receive 15 rupees");
    }
    
    else 
    {
        printf ("you will receive no prize");
    }



}