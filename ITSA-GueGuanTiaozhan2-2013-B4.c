#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int test_num;
    char stra[100], strb[100], alpha[26], alphb[26];
    scanf("%d", &test_num);
    for(int i = 0; i< test_num; i++){
        int flag = 1;
        for(int j = 0; j < 26; j++){
            alpha[j] = alphb[j] = '0';
        }
        scanf("%s", stra);
        scanf("%s", strb);
        for(int j = 0; j < strlen(stra); j++){
            alpha[stra[j] - 'a']++;
        }
        for(int j = 0; j < strlen(strb); j++){
            alphb[strb[j] - 'a']++;
        }
        for(int j = 0; j < 26; j++){
            if(alpha[j] != alphb[j]){
                flag = 0;
                break;
            }
        }
        printf("%d\n", flag);
    }
	return 0;
}
