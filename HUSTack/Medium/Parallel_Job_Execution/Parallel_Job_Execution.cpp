#include<bits/stdc++.h>
using namespace std;

int n;
int arr[100005];
int optimal_time;

void input(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
}

void solve(){
    // Sort the job by execution time
    sort(arr, arr+n, greater<int>());
    
    // Greedy execute the job with the longest executed time
    for(int i=0; i<n; i++){
        arr[i] = arr[i] + i;     // finished time
    }

    // Find job with longest time to execute => optimal time
    for(int i=0; i<n; i++){
        if(arr[i] > optimal_time) optimal_time = arr[i];
    }
    cout << optimal_time << endl;
}

int main(){
    input();
    solve();
    return 0;
}