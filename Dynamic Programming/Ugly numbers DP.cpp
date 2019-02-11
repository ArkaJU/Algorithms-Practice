#include <iostream>
using namespace std;

int uglyNo(int n){
    int ugly[n], i2, i3, i5, next_ugly_n=1;
    int next_m_2 = 2;
    int next_m_3 = 3;
    int next_m_5 = 5;
    ugly[0] = 1;
    i2 = i3 = i5 = 0;
    for(int i=1; i<n; i++){
        next_ugly_n = min(next_m_2, min(next_m_3, next_m_5));
        ugly[i] = next_ugly_n;
        if(next_ugly_n == next_m_2){
            i2 += 1;
            next_m_2 = 2*ugly[i2];
        }
        
        if(next_ugly_n == next_m_3){
            i3 += 1;
            next_m_3 = 3*ugly[i3];
        }
        
        if(next_ugly_n == next_m_5){
            i5 += 1;
            next_m_5 = 5*ugly[i5];
        }
    }
    return next_ugly_n;  
}
int main() {
    int n; cin>>n;
    cout<<uglyNo(n);
}
