#include <stdio.h>

int main(){
    int size=0;
    scanf("%d",&size);
    long long ary[size];
    for (int i=0; i<size; ++i) {
        scanf("%lld",&ary[i]);
    }
    long long arrry[size];
    for (int i=0; i<size; ++i) {
        arrry[i]=ary[size-1-i];
    }
    for (int i=0; i<size; ++i) {
        printf("%lld ",arrry[i]);
    }
}
