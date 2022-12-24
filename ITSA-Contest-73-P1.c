#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main(){
    int num;
    scanf("%d", &num);
    int arr[num], sum[num], order[num], copy[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j < num; j++)
        for(int i = num-1; i > j; i--)
            if(arr[i] < arr[i-1]){
                int temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
            }
    for(int i = 0; i < num; i++){
        sum[i] = order[i] = 0;
        int temp = arr[i];
        while(temp != 0){
            sum[i] += (temp%10);
            temp /= 10;
        }
        copy[i] = sum[i];
    }
    int min = INT_MAX, min_num, count = 0;
    for(int j = 0; j < num; j++){
        for(int i = 0; i < num; i++){
            if(copy[i] < min){
                min = copy[i];
                min_num = i;
            }
        }
        copy[min_num] = min = INT_MAX;
        order[j] = min_num;
    }
    for(int j = 0; j < num; j++){
        printf("%d", arr[order[j]]);
        if(j == num-1)
            printf("\n");
        else
            printf(" ");
    }
	return 0;
}

//4
//1725 3821 2011 1428
