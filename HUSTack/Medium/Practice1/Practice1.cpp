#include<bits/stdc++.h>
using namespace std;

int T;
int n;
int arr[100005];
int tree_even[400005];
int tree_odd[400005];
int dp_even[100005];
int dp_odd[100005];
pair<int, int> value_idx[100005];

void input(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        value_idx[i].first = arr[i];
        value_idx[i].second = i;
    }
}

void buildTree(int tree[], int arr[], int node, int first, int last){
    if(first == last) tree[node] = arr[first];
    else{
        int mid = (first + last) / 2;
        buildTree(tree, arr, 2*node, first, mid);
        buildTree(tree, arr, 2*node+1, mid+1, last);
        tree[node] = max(tree[2*node], tree[2*node+1]);
    }
}

int findMax(int tree[], int node, int first, int last, int l, int r){
    if(r < first || l > last) return 0;
    if(l <= first && r >= last) return tree[node];
    int mid = (first + last) / 2;
    int max_left = findMax(tree, 2*node, first, mid, l, r);
    int max_right = findMax(tree, 2*node+1, mid+1, last, l, r);
    return max(max_left, max_right);
}

void updateTree(int tree[],  int node, int first, int last, int idx, int value){
    if(first == last){
        tree[node] = value;
    }else{
        int mid = (first + last) / 2;
        if(first <= idx && idx <= mid)
            updateTree(tree, 2*node, first, mid, idx, value);
        else
            updateTree(tree, 2*node+1, mid+1, last, idx, value);
        
        tree[node] = max(tree[2*node], tree[2*node+1]);
    }
}

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first < b.first) return true;
    else return false;
}

void solve(){
    // reset dp array
    for(int i=0; i<n; i++){
        dp_odd[i] = 0;
        dp_even[i] = 0;
    }
    // sort
    sort(value_idx, value_idx+n, cmp);
    
    // reset tree
    buildTree(tree_even, dp_even, 1, 0, n-1);
    buildTree(tree_odd, dp_odd, 1, 0, n-1);
    
    for(int i=0; i<n; i++){
        if(value_idx[i].first % 2 == 0){
            int value = findMax(tree_odd, 1, 0, n-1, 0, value_idx[i].second - 1);
            updateTree(tree_even, 1, 0, n-1, value_idx[i].second, value + 1);
            dp_even[value_idx[i].second] = value + 1;
        }else{
            int value = findMax(tree_even, 1, 0, n-1, 0, value_idx[i].second - 1);
            updateTree(tree_odd, 1, 0, n-1, value_idx[i].second, value + 1);
            dp_odd[value_idx[i].second] = value + 1;
        }
    }

    // for(int i=0; i<n; i++) cout << dp_odd[i] << " ";
    // cout << endl;
    // for(int i=0; i<n; i++) cout << dp_even[i] << " ";
    // cout << endl;

    int max_odd = findMax(tree_odd, 1, 0, n-1, 0, n-1);
    int max_even = findMax(tree_even, 1, 0, n-1, 0, n-1);
    int result = max(max_odd, max_even);
    cout << result << endl;
}

int main(){
    cin >> T;
    for(int t=0; t<T; t++){
        input();
        solve();
    }
    return 0;
}