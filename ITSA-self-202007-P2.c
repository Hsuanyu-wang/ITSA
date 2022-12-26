#include <stdio.h>

int main(){
    int n, count = 0;
    scanf("%d", &n);
    int read[n], store[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &read[i]);
        store[i] = 0;
    }
    for(int i = 0; i < n; i++){
        store[read[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(store[i] != 0){
            count++;
        }
    }
    printf("%d\n", count);
    for(int i = 0; i < n; i++){
        if(store[i] != 0)
            printf("%d: %d\n", i, store[i]);
    }
    return 0;
}

//5
//2 2 4 1 3
