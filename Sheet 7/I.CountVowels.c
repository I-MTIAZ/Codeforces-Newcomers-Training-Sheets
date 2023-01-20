#include<stdio.h>
#include<string.h>
char a[300];
int l;
int vol(int i)
{
    int num;
    if(i == l) return 0;  ///   a e i o u  /0
                         ///    0 1 2 3 4   5


        num = vol(i+1);
        if(a[i] == 'a' || a[i] == 'A' ||
           a[i] == 'e' || a[i] == 'E' ||
           a[i] == 'i' || a[i] == 'I' ||
           a[i] == 'o' || a[i] == 'O' ||
           a[i] == 'u' || a[i] == 'U' )
        num += 1;
        return num;

}


int main()
{
    int  m;
    scanf("%[^\n]", a);
    l = strlen(a);

    m = vol(0);
    printf("%d", m);
}
