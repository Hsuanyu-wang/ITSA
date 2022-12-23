#include <stdio.h>
#include <stdlib.h>

int prime_check(int num){
    int flag = 1;
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main(){
    int turn = 0, num, count = 0;
    while(turn < 6){
        count = 0;
        turn++;
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        for(int i = 2; i < num; i++){
            if(prime_check(i) == 1){
                count++;
            }
        }
        printf("%d\n", count);
    }
	return 0;
}
