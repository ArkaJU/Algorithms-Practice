#include <iostream>
using namespace std;

int dp[20];
void lis(int a[], int n){
    for(int i=0; i<n; i++) dp[i] = 1;
    int best=-1;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(a[j]<a[i])
                dp[i] = max(dp[i], 1+dp[j]);
        }
    best = max(best, dp[i]);
    }
    cout<<best<<endl;
}
int main() {
    int n, a[20];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    lis(a, n);
    for(int i=0; i<n; i++)
        cout<<dp[i]<<" ";
}
