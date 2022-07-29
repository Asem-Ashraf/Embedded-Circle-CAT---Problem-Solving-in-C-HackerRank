#include <stdio.h>
#include <stdlib.h>
int main(){
    long long n,d;
    scanf("%lld %lld",&n,&d);
    long long ary[n];
    for (long long i=0; i<n; ++i) {
            scanf("%lld",&ary[i]);
    }
    long long newr[d];
    for (long long i=0; i<d; ++i) {
            newr[i]=ary[i];
    }
    for (long long i=0; i<n-d; ++i) {
            ary[i]=ary[i+d];
    }
    for (long long i=0; i<d; ++i) {
            ary[n-d+i]=newr[i];
    }
    
    for (long long i=0; i<n; ++i) {
            printf("%lld ",ary[i]);
    }
}
