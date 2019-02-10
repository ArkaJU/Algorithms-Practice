#include <iostream>
using namespace std;
int dp[100] = {};
void fib(int n){
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    for(int i=0; i<n; i++){
        cout<<dp[i]<<" ";
    }
}
int main() {
    int n; 
    cin>>n;
    fib(n);
}
