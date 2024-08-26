#include<stdio.h>
int op(int n[],int ns)
{
    int mi=0;
    int ope=0;
    for(int i=1;i<ns;i++){
        if(n[i]<n[mi]){
            mi=i;
        }
    }
    while (ns>0){
        if(mi==0){
            ns--;
            for(int i=0;i<ns;i++){
                n[i]=n[i+1];
            }
        }
        else{
            int t=n[0];
            for(int i=0;i<ns- 1;i++){
                n[i]=n[i+1];
            }
            n[ns- 1]=t;
        }
        ope++;
        mi=0;
        for(int i=1;i<ns;i++){
            if(n[i]<n[mi]){
                mi=i;
            }
        }
    }
    return ope;
}
int main(){
    int n[1400];
    int ns;
    scanf("%d",&ns);
    for(int i=0;i<ns;i++){
        scanf("%d",&n[i]);
    }
    int res=op(n,ns);
    printf("%d",res);
    return 0;
}
