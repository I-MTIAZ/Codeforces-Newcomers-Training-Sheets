#include<stdio.h>
void fun(int a)
{
    int t;
    if(a == 0) return;

    fun(a / 2);
    t = a % 2;
    printf("%d",t);
}



int main()
{
    int a,n,i;

    scanf("%d", &n);
    for(i=0; i < n; i++)
    {
        scanf("%d",&a);
        if(a == 0)
            printf("%d",0);
        fun(a);
        printf("\n");
    }
}
