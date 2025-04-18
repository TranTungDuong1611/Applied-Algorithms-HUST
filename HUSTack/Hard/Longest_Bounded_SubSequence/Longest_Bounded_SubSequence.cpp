#include<bits/stdc++.h>
using namespace std;

int n, Q;
int arr[1000005];
int prefix_sum[1000005];
int result;

void input(){
    cin >> n >> Q;
    for(int i=0; i<n; i++) cin >> arr[i];
}

void solve(){
    // Using 2 pointer both run from first to end
    int first = 0;
    int last = 0;
    int length = 0;
    int sum = 0;
    
    // run last pointer
    for(int last=0; last<n; last++){
        sum += arr[last];
        if(sum > Q){
            // run first pointer
            while(sum > Q && first < last){
                sum -= arr[first];
                first ++;
            }
        }
        
        // update length
        // cout << length << " " << last - first << " " << first << " " << last << endl;
        length = max(length, (last - first + 1));
    }

    cout << length << endl;
}

int main(){
    input();
    solve();
    return 0;
}