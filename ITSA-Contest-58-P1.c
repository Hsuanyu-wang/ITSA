#include <stdio.h>
#include <stdlib.h>

int main(){
    int test;
    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        int n, sum = 0;
        scanf("%d", &n);
        for(int j = 1; j <= n; j++){
            if(j%3 == 0)
                sum += j;
        }
        printf("%d\n", sum);
    }
	return 0;
}

