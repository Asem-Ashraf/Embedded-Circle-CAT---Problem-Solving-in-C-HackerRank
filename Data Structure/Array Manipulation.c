#include <stdio.h>
int size;
long long ary[10000000];
int main(){
    scanf("%d",&size);
    int rounds;
    scanf("%d",&rounds);
    long long max=0;
    int a,b;
    long long pluse;
    for (int j=0; j<rounds; ++j) {
        scanf("%d %d %lld",&a,&b,&pluse);
        ary[a-1]+=pluse;
        ary[b]-=pluse;
    }
    for (int j=1; j<size; ++j)ary[j]+=ary[j-1];
    max=ary[0];
    for (int j=0; j<size; ++j)if(ary[j]>max)max=ary[j];
    printf("%lld",max);
}
