#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n;
    char arr[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i ++){
        scanf("%s", arr);
//        printf("%s\n", arr);
        printf("Tokens found:\n");
        for(int j = 0; j < strlen(arr); j ++){
            if(arr[j] == ':' || arr[j] == ',' || arr[j] == ';'){
                printf("\n");
            }
            else{
                printf("%c", arr[j]);
            }
        }
        printf("\n");
    }

	return 0;
}

//2
//abc,def:ghijk,lmn
//wprd:office;excel,powerpoint;project
