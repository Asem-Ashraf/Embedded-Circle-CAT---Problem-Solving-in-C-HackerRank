#include <stdio.h>

int main(){
    int size=6;
    long long ary[size][size];
    for (int i=0; i<size; ++i) {
        for (int k=0; k<size; ++k) {
            scanf("%lld",&ary[i][k]);
        }
    }
    long long max=-9223372036854775807;
    long long sums[4][4];
    for (int i =0; i<4; ++i) {
        for (int j =0; j<4; ++j) {
            sums[i][j]=ary[i][j]+ary[i][j+1]+ary[i][j+2]+ary[i+1][j+1]+ary[i+2][j]+ary[i+2][j+1]+ary[i+2][j+2];
            if (sums[i][j]>max)max=sums[i][j];
        }
    }
    printf("%lld",max);
}
