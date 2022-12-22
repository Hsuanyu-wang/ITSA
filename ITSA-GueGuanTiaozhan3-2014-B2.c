#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int h){
    int base = 1;
    for(int i = 1 ;i <= h; i++){
        base *= i;
    }
    return base;
}

int main(){
    int test_num, n, k, N, K, M;
    scanf("%d", &test_num);
    for(int i = 1 ;i <= test_num; i++){
        scanf("%d %d", &n, &k);
        N = factorial(n), K = factorial(k), M = factorial(n-k);
        printf("%d\n", N/K/M);
    }


	return 0;
}
