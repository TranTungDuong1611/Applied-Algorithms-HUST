#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define MAX_LENGTH 1000005

int n;
int arr[MAX_LENGTH];
int Q;
int l, r;
int rmq[20][MAX_LENGTH];        // log2(MAX_LENGTH) = 20

void input(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
}

// rmq[j][i] = min value in range (i, i + 2^j - 1)
void preprocessing(){
    for(int i=0; i<n; i++){
        rmq[0][i] = arr[i];          // min(i, i) = i
    }
    
    // build parse tree
    for(int j=1; j < int(log2(n))+1; j++){
        for(int i=0; i + (1 << j) - 1 < n; i++){
            rmq[j][i] = min(rmq[j-1][i], rmq[j-1][i + (1 << j-1)]);
        }
    }
}

void printTree(){
    for(int j=0; j < int(log2(n))+1; j++){
        for(int i=0; i + (1 << j)<n; i++){
            cout << rmq[j][i] << " ";
        }
        cout << endl;
    }
}

// process query
int queryMin(int l, int r){
    // device the (l, r) in 2 overlap range (l, l + 2^(k-1)) and (r - 2^(k-1), r)
    int k = log2(r - l + 1);
    return min(rmq[k][l], rmq[k][r - (1 << k) + 1]);
}

int main(){
    int result = 0;
    input();
    preprocessing();
    cin >> Q;
    for(int q=0; q<Q; q++){
        cin >> l >> r;
        result += queryMin(l, r);
    }
    // printTree();
    cout << result << endl;
}