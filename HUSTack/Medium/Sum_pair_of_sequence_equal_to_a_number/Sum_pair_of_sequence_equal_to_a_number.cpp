#include<bits/stdc++.h>
using namespace std;

int n, M;
int arr[1000005];
int result;

void input(){
    cin >> n >> M;
    for(int i=0; i<n; i++) cin >> arr[i];
}

void solve(){
    // Sort array
    sort(arr, arr+n, greater<int>());

    int first = 0;
    int last = n-1;
    while(first < last){
        if(arr[first] + arr[last] == M){
            result ++;
            first ++;
        }
        else if(arr[first] + arr[last] < M) last --;
        else first ++;
    }
    cout << result << endl;
}

int main(){
    input();
    solve();
    return 0;
}