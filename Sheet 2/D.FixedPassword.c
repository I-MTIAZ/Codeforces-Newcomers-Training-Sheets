#include<stdio.h>
int main()
{
    int a,  b;



    for(;;)
    {
        scanf("%d", &b);
        if(b == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
            printf("Wrong\n");


    }

    return 0;
}
