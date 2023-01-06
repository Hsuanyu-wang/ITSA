#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int test;
    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        char arr[14];
        scanf("%s", arr);
//        printf("%s\n");
        int sum1 = 0, sum2 = 0, v;
        for(int j = 0; j < 12; j += 2){
            sum1 += (int)(arr[j]-'0');
        }
//        printf("sum1 = %d\n", sum1);
        for(int j = 1; j < 12; j += 2){
            sum2 += (int)(arr[j]-'0');
        }
//        printf("sum2 = %d\n", sum2);
        v = (int)(26 - (sum1 + 3 * sum2) % 26);
//        printf("%d %d\n", v, (int)(arr[12]-'A'+1));
        if( (int)(arr[12]-'A'+1) == v)
            printf("valid\n");
        else
            printf("invalid\n");
    }
	return 0;
}
//2
//123456789012L
//098765432100A
