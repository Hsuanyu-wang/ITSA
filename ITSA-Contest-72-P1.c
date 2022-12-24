#include <stdio.h>
#include <stdlib.h>

int main(){
    int test;
    while( scanf("%d", &test) != EOF ){
        int flag = 1;
        for(int i = 2; i< test; i++){
            if(test % i == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            printf("YES\n");
        else if(flag == 0)
            printf("NO\n");
    }
	return 0;
}
