#include <stdio.h>
#include <stdlib.h>

void func(int n){
    float sum = 0;
    for(float i = 0; i < n; i += 2){
        sum += 1/(i*2+1);
    }
    for(float i = 1; i < n; i += 2){
        sum -= 1/(i*2+1);
    }
    sum *= 4;
    printf("%.5f\n", sum);
    return sum;
}

int main(){
    int n;
    float ans;
    while(scanf("%d", &n) != EOF){
        if(n == 0){
            break;
        }
        func(n);
    }
	return 0;
}
