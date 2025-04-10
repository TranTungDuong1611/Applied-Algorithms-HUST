#include<bits/stdc++.h>
using namespace std;

stack<int> S;

int main(){
    char cmd[4];
    int value;
    while(1){
        cin >> cmd;
        if(strcmp(cmd, "#") == 0) break;
        else if(strcmp(cmd, "PUSH") == 0){
            cin >> value;
            S.push(value);
        }else if(strcmp(cmd, "POP") == 0){
            // check the length of stack equal 0 or not
            if(S.size()){
                cout << S.top() << endl;
                S.pop();
            }else{
                cout << "NULL" << endl;
            }
        }
    }
    return 0;
}