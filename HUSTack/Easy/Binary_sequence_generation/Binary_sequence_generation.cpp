#include<bits/stdc++.h>
using namespace std;

int n;
int results[1000];

void input(){
    cin >> n;
}

void printsol(){
    for(int i=0; i<n; i++){
        printf("%d", results[i]);
    }
    printf("\n");
}

// Back-tracking algorithms
void Try(int k){
    for(int i=0; i<=1; i++){
        results[k] = i;
        if(k == n-1) printsol();
        else Try(k+1);
    }
}

int main(){
    input();
    Try(0);
    return 0;
}