#include<bits/stdc++.h>
using namespace std;

int n;
int arr[100001];
set<int> results;
int set_length;

void input(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

void solve(){
    for(int i=0; i<n; i++){
        results.insert(arr[i]);
        int new_length = results.size();
        if(new_length > set_length){
            cout << "0" << endl;
            set_length = new_length;
        }else{
            cout << "1" << endl;
        }
    }
}

int main(){
    input();
    solve();
    return 0;
}