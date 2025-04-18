#include<bits/stdc++.h>
using namespace std;

int n, m;
int arr[1005][1005];
int Q;
int r1, r2, c1, c2;
int prefix_sum[1005][1005];

void input(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) cin >> arr[i][j];
    }
}

void process_querry(int r1, int r2, int c1, int c2){
    int result =  prefix_sum[r2][c2] - (prefix_sum[r1-1][c2] + prefix_sum[r2][c1-1]) + prefix_sum[r1-1][c1-1];
    cout << result << endl;
    return;
}

void init_prefix_sum(){
    // using prefix sum
    // initialize first values for prefix sum
    prefix_sum[0][0] = arr[0][0];
    for(int i=0; i<=n; i++) prefix_sum[i][0] = prefix_sum[i-1][0] + arr[i][0];
    for(int j=0; j<=m; j++) prefix_sum[0][j] = prefix_sum[0][j-1] + arr[0][j];

    // loop for calculating prefix sum
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            prefix_sum[i][j] = prefix_sum[i-1][j] + prefix_sum[i][j-1] - prefix_sum[i-1][j-1] + arr[i][j];
        }
    }
}

int main(){
    input();
    init_prefix_sum();
    cin >> Q;
    for(int query=0; query<Q; query++){
        cin >> r1 >> c1 >> r2 >> c2;
        process_querry(r1, r2, c1, c2);
    }
    return 0;
}