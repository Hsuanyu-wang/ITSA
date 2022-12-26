#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], id;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &id, &arr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d %d\n", i, arr[i]);
    }
    for(int j = 0; j < n; j++){
        for(int i = n-1; i > j; i--){
            if(arr[i] > arr[i-1]){
                int tmp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = tmp;
            }
            for(int k = 0; k < n; k++){
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++){
        printf("%d %d\n", i, arr[i]);
    }
    int head = 0, flag = 0, ans, count = 0, fin = 0;
    while(count < 5){
        if(head + 4 >= n){
            break;
        }
        if(arr[head] <= 0){
            head++;
            continue;
        }
        for(int i = 0 + head; i < head + 5; i++){
            arr[i]--;
        }
        count++;
        if(count == 5){
            count = 0;
            fin++;
        }
    }
    printf("%d\n", fin);
}

//7
//1 5
//2 9
//3 10
//4 3
//5 3
//6 6
//7 6
