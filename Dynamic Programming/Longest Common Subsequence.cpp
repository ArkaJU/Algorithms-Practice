#include <iostream>
#include <cstring>
using namespace std;

int dp[100][100] = {};
int LCS(char a[], char b[]){
    int m = strlen(a);
    int n = strlen(b);
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(a[i-1] == b[j-1])
                dp[i][j] = 1+dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    char res[20];
    int i=m, j=n, k=dp[m][n];
    while(i>0 && j>0){
        if(a[i-1] == b[j-1]){
            res[--k] = a[i-1];
            i--; j--;
        }
        else if(dp[i-1][j] > dp[i][j-1])
            i--;
        else 
            j--; 
    }
    for(int i=0; i<dp[m][n]; i++) cout<<res[i];
}
int main() {
    char a[] = "GEEKSFORGEEKS";
    char b[] = "GEEKSF";
    LCS(a, b);
}
