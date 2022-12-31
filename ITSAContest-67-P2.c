#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        int count = 0;
        for(int i = 1; i <= n; i ++){
            if(n >= i){
                n = n-i;
                count++;
            }
        }
        printf("%d\n", count);
    }
	return 0;
}

