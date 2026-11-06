#include <bits/stdc++.h>
using namespace std;

int main(){
    long long T, expected_sum , actual_sum ,n;
    cin >> T;
    actual_sum=0;
    for(int i=0;i<T-1;i++){
        cin >> n;
        actual_sum +=n;
    }
    expected_sum = (T*(T+1LL))/2;
    cout << expected_sum - actual_sum << "\n"; 

    return 0;
    
}