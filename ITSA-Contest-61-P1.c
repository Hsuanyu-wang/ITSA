#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int test;
    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        float n, sum = 0, n_sum = 0;
        scanf("%f", &n);
//        printf("Summer months:%.2f\nNon-Summer months:%.2f\n", sum, n_sum);
        if(n >= 701){
            sum += ((n-700)*5.63);
            n_sum += ((n-700)*4.5);
            n = 700;
        }
//        printf("Summer months:%.2f\nNon-Summer months:%.2f\n", sum, n_sum);
        if(n>=501){
            sum += ((n-500)*4.97);
            n_sum += ((n-500)*4.01);
            n = 500;
        }
//        printf("Summer months:%.2f\nNon-Summer months:%.2f\n", sum, n_sum);
        if(n>=331){
            sum += ((n-330)*4.39);
            n_sum += ((n-330)*3.61);
            n = 330;
        }
//        printf("Summer months:%.2f\nNon-Summer months:%.2f\n", sum, n_sum);
        if(n>=121){
            sum += ((n-120)*3.02);
            n_sum += ((n-120)*2.68);
            n = 120;
        }
//        printf("Summer months:%.2f\nNon-Summer months:%.2f\n", sum, n_sum);
        if(n <= 120){
            sum += n*2.1;
            n_sum += n*2.1;
        }
        printf("Summer months:%.2f\nNon-Summer months:%.2f\n", sum, n_sum);
    }
	return 0;
}
