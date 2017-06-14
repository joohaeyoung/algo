#include <stdio.h>
 
int main(void){
 
    long long int N;
    long long int Dp[95][2] = {};
    scanf("%lld", &N);
    Dp[1][0] = 1;
    Dp[1][1] = 1;
 
    for (int i = 2; i <= N; i++){
        Dp[i][0] = Dp[i - 1][0] + Dp[i - 1][1];
        Dp[i][1] = Dp[i - 1][0];
    }
 
    printf("%lld\n", Dp[N][1]);
 
    return 0;
}


