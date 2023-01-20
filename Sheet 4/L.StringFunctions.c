#include<stdio.h>
#include<string.h>

void pop(char a[], int n)
{

    a[strlen(a)- 1] = '\0';
}

void front(char a[], int n)
{
    printf("%c\n",a[0]);
}

void back(char a[], int n)
{

    printf("%c\n", a[strlen(a)-1] );
}
void sort(char a[], int l, int r)
{
    l -=1;
    r -= 1;
    int t, i , j;
    for(i = l; i <= r; i++)
    {
        for(j = i; j<= r; j++)
        {
            if(a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

void rev(char a[], int l, int r)
{
    int i , j;
    l -=1;
    r -= 1;
    char b[100];
    strcpy(b,a);
    for(i = l ,j = r; i <= r , j >= l; i++, j--)
    {
            a[i] = b[j];

    }
}

void print(char a[] ,int l)
{
    printf("%c\n",a[l]);
}

void sub(char a[] ,int l, int r)
{
    int i;
    l -=1;
    r -= 1;
    for(i=l; i<=r; i++)
        printf("%c",a[i]);
        printf("\n");
}

void push(char a[], int n, char t)
{
    n = n+1;
    a[n-1] = t;

}

int main()
{
    char a[12];
    int n, l, r, i;
    scanf("%d", &n);

    for(i = 0 ; i < n ; i++)
           scanf(" %c", &a[i]);
           a[i] = '\0';

            sub(a,l = 1, r = 6);
            sort(a,l = 5, r = 8);
            pop(a, n);
            back(a, n);
            rev(a, l = 1, r= 6);
            front(a, n);
            push (a, n,'i');
            print (a, l = 4);



    printf("\n\n\n%s", a);
}
