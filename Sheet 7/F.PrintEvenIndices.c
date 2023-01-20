#include<stdio.h>
int a[1010];
void fun1(int j)
    {
    if(j == 0) return;

    printf("%d ",a[j-1]);
    fun1(j-2);
    }

void fun2(int j)
    {
    if(j == -1) return;

    printf("%d ",a[j]);
    fun2(j-2);
    }

int main()
{
    int i, n, j = 0;
    scanf("%d", &n);
    for(i = 0; i < n;i++)
    {
        j++;
        scanf("%d",&a[j]);
    }
    if(j % 2 == 0)
    fun1(j);
    else
    fun2(j);

}

