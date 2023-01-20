
#include<stdio.h>
int main()
{
     int a, i, b, m, j = 0;
    scanf("%d", &a);


    for(i = 2 ;i < a; i++)
    {

        if(a % i == 0)
            j = 1;
    }
    if(j == 0)
    printf("%d\n", a);

    else
    printf("NO\n");




    return 0;
}


