#include<stdio.h>
int main()
{
    int s,m=0,r=0;
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    int L=arr[0];
    for(int i=0;i<s;i++)
    {
        int sum=0;
        for(int j=i;j<s;j++)
        {
            sum=sum+arr[j];
            if(sum>L)
            {
                m=i;
                r=j;
                L=sum;
            }
        }
    }
    for(int z=m;z<=r;z++)
    {
        //printf(" %d ",arr[z]);
    }
    printf(" %d",L);
    return 0;
}
