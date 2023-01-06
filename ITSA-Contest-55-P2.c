#include <stdio.h>
#include <stdlib.h>

int main(){
    int test;
    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        int a, b, c, k = 1;
        scanf("%d %d %d", &a, &b, &c);
        while(1){
            if( (k % 7 == a) && (k % 11 == (11-b)) && (k %17 ==c) ){
                printf("%d\n", k);
                break;
            }
            k++;
        }

    }
	return 0;
}

