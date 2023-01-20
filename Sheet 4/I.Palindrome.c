#include<stdio.h>
#include<string.h>
int main()
{
    char a[1010],b[1010];
    gets(a);
    int i, l, f = 0, j;
    l = strlen(a);
    l -= 1;
    //printf("%d",l);

    for(i = l,j = 0 ;i >= 0; i--,j++)
    {
        b[j] = a[i];
        //printf("%c\n",b[i]);
    }
    b[j+1] = '\0';


    for(i = 0,j = 0 ;a[i] != '\0'; i++, j++)
    {
        if(a[i] == b[i]){
            f = 0;

        }

        else
        {
            f = 1;
            break;
        }
    }
    if(f == 0)
        printf("YES\n");
    else
        printf("NO\n");


return 0;

}

