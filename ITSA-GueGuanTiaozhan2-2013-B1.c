#include <stdio.h>

int main(){
    int test_num, n;
    double To, Ti;
    scanf("%d", &test_num);
    for(int i = 0; i< test_num; i++){
        scanf("%lf,%d", &To, &n);
        Ti = To;
        for(int j = 1; j <= n; j++)
            Ti += j*2.71828;
        printf("%.4lf\n", Ti);
    }
	return 0;
}
