#include<bits/stdc++.h>
using namespace std;

int n;
int arr[100005];
int Q;
int first;
int last;
int prefix_sum[100005];

void input(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
}

void calculate_prefix_sum(){
    prefix_sum[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix_sum[i] =prefix_sum[i-1] + arr[i];
    }
}

void process_query(int first, int last){
    if(first == 0){
        cout << prefix_sum[last] << endl;
        return;
    }
    int result = prefix_sum[last] - prefix_sum[first - 1];
    cout << result << endl;
    return;
}

int main(){
    input();
    // Read number of query
    cin >> Q;
    // preprocessing for calculating prefix sum
    calculate_prefix_sum();
    
    for(int i=0; i<Q; i++){
        cin >> first >> last;
        process_query(first-1, last-1);
    }
    return 0;
}