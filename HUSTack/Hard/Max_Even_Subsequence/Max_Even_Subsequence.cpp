#include<bits/stdc++.h>
using namespace std;

int n;
long long arr[1000005];
long long dp_even[1000005];
long long dp_odd[1000005];

const long long MIN_VAL = -1e9;

void input(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
}

void solve(){
    // init first value of dp array
    if(arr[0] % 2 == 0) {
        dp_even[0] = arr[0];
        dp_odd[0] = MIN_VAL;
    }else{
        dp_odd[0] = arr[0];
        dp_even[0] = MIN_VAL;
    }

    // dp
    for(int i=1; i<n; i++){
        if(arr[i] % 2 == 0){
            dp_even[i] = max(arr[i], dp_even[i-1] + arr[i]);
            dp_odd[i] = max(MIN_VAL, dp_odd[i-1] + arr[i]);
        }else{
            dp_even[i] = max(MIN_VAL, dp_odd[i-1] + arr[i]);
            dp_odd[i] = max(arr[i], dp_even[i-1] + arr[i]);
        }
    }
    
    // find subsequence with max weight
    long long result = -1e9;
    for(int i=0; i<n; i++) result = max(result, dp_even[i]);
    cout << result << endl;
}

int main(){
    input();
    solve();
    return 0;
}