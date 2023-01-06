#include <stdio.h>
#include <stdlib.h>

int main(){
    int test;
    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        float arr[10];
        float max = 0, min = 1001;
        for(int j = 0; j < 10; j++){
           scanf("%f", &arr[j]);
           if(arr[j] > max)
                max = arr[j];
           if(arr[j] < min)
                min = arr[j];
        }
        printf("maximum:%.2f\n", max);
        printf("minimum:%.2f\n", min);
    }
	return 0;
}

