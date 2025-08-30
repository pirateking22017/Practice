#include <stdio.h>

void calculate_the_maximum(int n, int k){
    int maxAnd =0, maxOr =0, maxXor=0;
    for(int i = 1;i<=n;i++){
        for(int j=i+1; j<=n; j++){
            int a = i & j;
            if(a > maxAnd && a < k) maxAnd = a;
            int b = i | j;
            if(b > maxOr && b < k) maxOr = b;
            int c = i ^ j;
            if(c > maxXor && c<k) maxXor = c;
        }
    }

     printf("%d\n%d\n%d\n", maxAnd, maxOr, maxx);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    calculate_the_maximum(a,b);
}