#include<bits/stdc++.h>
using namespace std;

int n;
int arr[1000005];
int result;

void input(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
}

void solve(){
    int count = 1;

    for(int i=1; i<n; i++){
        if(arr[i-1] < arr[i]) count += 1;
        else count = 1;

        result = max(result, count);
    }

    cout << result << endl;
}

int main(){
    input();
    solve();
    return 0;
}