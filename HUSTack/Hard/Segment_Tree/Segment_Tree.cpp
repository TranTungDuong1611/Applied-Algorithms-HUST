#include<bits/stdc++.h>
using namespace std;

int n;
int arr[100000];
int Q;
int tree[400000];

void input(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
}

void buildTree(int tree[], int arr[], int node, int first, int last){
    if(first == last) tree[node] = arr[first];
    else{
        int mid = (first + last) / 2;
        // build the left tree
        buildTree(tree, arr, 2*node, first, mid);
        // build the right tree
        buildTree(tree, arr, 2*node+1, mid+1, last);
        // update value of tree in node
        tree[node] = max(tree[2*node], tree[2*node+1]);
    }
}

void updateTree(int tree[], int arr[], int node, int first, int last, int idx, int value){
    if(first == last) tree[node] = value;
    else{
        int mid = (first + last) / 2;
        if(first <= idx && idx <= mid) updateTree(tree, arr, 2*node, first, mid, idx, value);      // update tree on the left
        else updateTree(tree, arr, 2*node + 1, mid+1, last, idx, value);                            // update tree on the right
        tree[node] = max(tree[2*node], tree[2*node+1]);
    }
}

int query(int tree[], int arr[], int node, int first, int last, int l, int r){
    if(r < first || l > last) return -1;
    if(l <= first && r >= last) return tree[node];
    int mid = (first + last) / 2;
    int max_left = query(tree, arr, 2*node, first, mid, l, r);
    int max_right = query(tree, arr, 2*node+1, mid+1, last, l, r);
    return max(max_left, max_right);
}

int main(){
    // read input
    input();
    // read Query
    cin >> Q;
    char cmd[20];
    // build tree
    buildTree(tree, arr, 1, 0, n-1);
    // process query
    for(int i=0; i<Q; i++){
        cin >> cmd;
        if(strcmp(cmd, "get-max") == 0){
            int l, r;
            cin >> l >> r;
            cout << query(tree, arr, 1, 0, n-1, l - 1, r - 1) << endl;
        }else if(strcmp(cmd, "update") == 0){
            int idx, value;
            cin >> idx >> value;
            updateTree(tree, arr, 1, 0, n-1, idx - 1, value);
        }
    }
    return 0;
}