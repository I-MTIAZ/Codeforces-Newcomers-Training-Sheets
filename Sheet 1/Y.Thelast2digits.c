#include<stdio.h>
int main()
{
    int i, j, a , A = 1, B;
    int p = 1;


    for(i = 1; i <= 4 ; i++)
    {
        scanf("%d", &j);
        j %= 100;
        A *= j;
    }
    B = A % 10;
    A /= 10;
    A %= 10;


        printf("%d%d", A, B);


            return 0;




}
