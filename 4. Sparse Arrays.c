#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    long long n,d;
    scanf("%lld\n",&n);
    char ary[n][21];
    for (long long i=0; i<n; i++) {
        //scanf("%s",ary[i]);
        gets(ary[i]);
    }
    scanf("%lld\n",&d);
    for (long long i=0; i<d; ++i) {
        char str[21];
        //scanf("%s",str);
        gets(str);
        long long count=0;
        for (long long j=0; j<n; ++j) {
            if(!strcmp(str, ary[j]))count++;

        }
        printf("%lld\n",count);
    }
}
