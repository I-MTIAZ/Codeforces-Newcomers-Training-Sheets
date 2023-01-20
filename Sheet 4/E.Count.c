#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000010];
    int t = 0, i, s = 0;
    scanf("%s", a);

    for(i = 0; a[i] != '\0'; i++){
         if(a[i] == '0')
            s = 0;
         else if(a[i] == '1')
            s = 1;
         else if(a[i] == '2')
            s = 2;
         else if(a[i] == '3')
            s = 3;
         else if(a[i] == '4')
            s = 4;
         else if(a[i] == '5')
            s = 5;
         else if(a[i] == '6')
            s = 6;
         else if(a[i] == '7')
            s = 7;
         else if(a[i] == '8')
            s = 8;
         else if(a[i] == '9')
            s = 9;
            t += s;
    }
    printf("%d\n",t);

}
