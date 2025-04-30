#include<bits/stdc++.h>
using namespace std;

int n;
int arr[1000];

void input(){
    cin >> n;
}

void printSol(){
    for(int i=1; i<=n; i++) cout << arr[i];
    cout << endl;
}

void Try(int k){
    for(int i=0; i<=1; i++){
        arr[k] = i;
        if(arr[k] == 1 && arr[k-1] == 1);   // invalid case
        else{
            if(k == n) printSol();
            else Try(k+1);
        }
    }
}

int main(){
    input();
    Try(1);
    return 0;
}