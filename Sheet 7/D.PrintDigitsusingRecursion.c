#include<stdio.h>
void fun(int a)
{
    int t;
    if(a == 0)
        return;

    fun(a / 10);
    t = a % 10;
    printf("%d ",t);

}
int main()
{
    int a, i,t ;
    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d", &a);
        if(a == 0)
            printf("%d",0);
        fun(a);
        printf("\n");
    }
}
