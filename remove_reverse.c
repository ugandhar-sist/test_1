#include <stdio.h>
int main()
{
    int x,y,i,temp, rev, d,org;
    scanf("%d %d", &x, &y);
    for(i=x; i<=y; i++)
    {
        org=i;
        rev = 0;
        temp = i;
        while(temp != 0)
        {
            d = i%10;
            rev = rev * 10 + d;
            temp = temp/10;
        }
        if(org != rev)
        {
            printf("%d ", i);
        }
    }
}
