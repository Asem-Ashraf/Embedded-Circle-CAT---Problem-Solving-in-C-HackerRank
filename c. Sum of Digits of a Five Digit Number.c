#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum=0;
    for (int s = 0; s<5; s++) {
        sum+=n%10;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}
