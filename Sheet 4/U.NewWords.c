#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000010];
    int i,j,b[200002] = {0}, min;
    gets(a);

    for(i = 0; a[i] != '\0'; i++){
        if(a[i] == 'e' || a[i] == 'E')
                b[0]++;

        else if(a[i] == 'g' || a[i] == 'G')
                b[1]++;

        else if(a[i] == 'y' || a[i] == 'Y')
                b[2]++;

        else if(a[i] == 'p' || a[i] == 'P')
                b[3]++;

        else if(a[i] == 't' || a[i] == 'T')
                b[4]++;
    }

    min = 1000000;
    for(i = 0 ; i < 5; i++)
    {
        if(b[i] < min)
            min = b[i];
    }
    printf("%d\n", min);



}

