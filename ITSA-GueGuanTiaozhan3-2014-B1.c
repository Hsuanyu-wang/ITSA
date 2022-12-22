#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sol_func(int B, int C){
    double ans1, ans2;
    ans1 = (double)(-B + sqrt( (B*B - 4*C) ) ) / 2;
    ans2 = (double)(-B - sqrt( (B*B - 4*C) ) ) / 2;
    printf("%.2lf %.2lf\n", ans1, ans2);
}

int main(){
    int test_num;
    double a, c1, c2, d, A, B, C;
    scanf("%d", &test_num);
    for(int i = 0; i< test_num; i++){
        scanf("%lf %lf %lf %lf", &a, &c1, &c2, &d);
        B = (a+d)*(-1), C = a*d-c1*c2;
        sol_func(B, C);
    }
	return 0;
}
