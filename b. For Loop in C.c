#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	for (int s = a; s<=b; s++) {
        if(s==1) {
        printf("one\n"); 
        }
        else if(s==2) {
        printf("two\n"); 
        }
        else if(s==3) {
            printf("three\n"); 
        }
        else if(s==4) {
            printf("four\n"); 
        }
        else if(s==5) {
            printf("five\n"); 
        }
        else if(s==6) {
            printf("six\n"); 
        }
        else if(s==7) {
            printf("seven\n"); 
        }
        else if(s==8) {
            printf("eight\n"); 
        }
        else if(s==9) {
            printf("nine\n"); 
        }
        else {
            if(s%2==0)printf("even\n");
            else printf("odd\n");
        }
    }

    return 0;
}

