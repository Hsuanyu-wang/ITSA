#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

void d1(int n, float* x, float* y){
    float sum = 0;
    for(int i = 0; i < n; i++){
//        printf("float : %f\n", (float)abs(x[i] - y[i]));
        sum += (float)abs(x[i] - y[i]);
    }
    printf("%.4f ", sum);
}

void d2(int n, float* x, float* y){
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += ( (double)abs(x[i] - y[i]) * (double)abs(x[i] - y[i]) );
    }
    printf("%.4lf ", sqrt(sum));
}

void d3(int n, float* x, float* y){
    double MAX = INT_MIN;
    for(int i = 0; i < n; i++){
        if( (double)abs(x[i] - y[i]) > MAX){
            MAX = (double)abs(x[i] - y[i]);
        }
    }
    printf("%.4lf ", MAX);
}

void d4(int n, float* x, float* y){
    double up = 0, down_x = 0, down_y = 0, down = 0;
    for(int i = 0; i < n; i++){
        up += (double)(x[i]*y[i]);
        down_x += (double)(x[i]*x[i]);
        down_y += (double)(y[i]*y[i]);
    }
    down = sqrt(down_x * down_y);
    printf("%.4lf\n", (float)(1-fabs(up/down)) );
}

int main(){
    int test_num, n;
    scanf("%d", &test_num);
    for(int i = 0; i< test_num; i++){
        scanf("%d", &n);
        float x[n], y[n];
        for(int i = 0; i < n; i++){
            scanf("%f", &x[i]);
        }
        for(int i = 0; i < n; i++){
            scanf("%f", &y[i]);
        }
        d1(n, x, y), d2(n, x, y), d3(n, x, y), d4(n, x, y);
    }
	return 0;
}
