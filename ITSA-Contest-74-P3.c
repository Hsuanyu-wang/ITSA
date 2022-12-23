#include <stdio.h>
#include <stdlib.h>

int main(){
    int test_num;
    scanf("%d", &test_num);
    for(int i = 0; i< test_num; i++){
        int array_num;
        scanf("%d", &array_num);
        int array[array_num], count[array_num];
        for(int i = 0; i< array_num; i++){
            scanf("%d", &array[i]);
            count[i] = 0;
        }
        for(int i = 0; i< array_num; i++){
            count[array[i]]++;
        }
        int max = count[0];
        for(int i = 1; i < array_num; i++){
            if(count[i] > max){
                max = count[i];
            }
        }
        printf("%d\n", max);
    }
	return 0;
}
