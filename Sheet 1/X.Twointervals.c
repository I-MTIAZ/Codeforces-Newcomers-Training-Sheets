#include<stdio.h>
int main()
{

    int l , r, ll, rr;


    scanf("%d%d%d%d", &l, &r, &ll, &rr);

    if(l > rr || r < ll)
        printf("-1");

    else if(l == ll && r == rr)
        printf("%d %d", l , r); ///2

    else if(l == ll && r > rr)
        printf("%d %d", ll , rr); ///1

    else if(l == ll && r < rr)
        printf("%d %d", l , r);  ///2

    else if(l < ll && r == rr)
        printf("%d %d", ll , rr);  ///1

    else if(l > ll && r == rr)
        printf("%d %d", l , r);  ///2

    else if(l > ll && r > rr)
        printf("%d %d", l , rr);  ///3

    else if(l < ll && r < rr)
        printf("%d %d", ll , r);  ///4

    else if(l < ll && r > rr)
        printf("%d %d", ll , rr);  ///1

    else if(l > ll && r < rr)
        printf("%d %d", l , r);    ///2

    return 0;

}
