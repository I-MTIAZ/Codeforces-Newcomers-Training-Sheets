#include<stdio.h>
#include<string.h>
#define ll long long int
int main()
{
    char a[2000010];
    int i, n;
    ll s = 0, l;
    scanf("%d", &n);
        for(i = 0; i < n ;i++)
            scanf(" %c", &a[i]);

        l = strlen(a);

    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == 'V')
            s += 5;
        else if(a[i] == 'W')
            s += 2;
        else if(a[i] == 'X')
            i++;
        else if(a[i] == 'Y')
        {
            if(i+1 < l)
            {
                a[l] = a[i+1];
                i++;
                l++;
            }

        }



        else if(a[i] == 'Z')
        {
            if(a[i+1] == 'V'){
                s /= 5;
                    i++;
            }
            else if(a[i+1] == 'W'){
                s /= 2;
                    i++;
            }

        }

    }
        printf("%lld\n",s);






}
