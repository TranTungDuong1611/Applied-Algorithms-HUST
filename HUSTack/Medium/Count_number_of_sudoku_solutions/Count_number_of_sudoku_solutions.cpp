#include<bits/stdc++.h>
using namespace std;

int num_sol;
int arr[10][10];
int X[10][10];

void input(){
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++) cin >> arr[i][j];
    }
}

// check if put the value i in row r is valid or not
bool checkRow(int r, int c, int value){
    for(int j=1; j<=9; j++){
        if(j != c && arr[r][j] == value) return false;
    }
    return true;
}

// check if put the value i in col c is valid or not
bool checkCol(int r, int c, int value){
    for(int i=1; i<=9; i++){
        if(i != r && arr[i][c] == value) return false;
    }
    return true;
}

// check if put the value i in sub-square is valid or not
bool checkSubSquare(int r, int c, int value){
    int r_sub = ((r-1)/3)*3 + 1;    // ex: r = 2 => r_sub = 1 => range needs to check is (1, 3)
    int c_sub = ((c-1)/3)*3 + 1;    // ex: c = 7 => c_sub = 2 => range needs to check is (7, 9)
    for(int i=r_sub; i<r_sub+3; i++){
        for(int j=c_sub; j<c_sub+3; j++){
            if(i != r && j != c && arr[i][j] == value) return false;
        }
    }
    return true;
}

bool check(int r, int c, int value){
    if(checkRow(r, c, value) && checkCol(r, c, value) && checkSubSquare(r, c, value))
        return true;
    else
        return false;
}

void Try(int r, int c){
    if(arr[r][c] == 0){
        for(int value=1; value<=9; value++){
            arr[r][c] = value;
            if(check(r, c, value)){
                if(r == 9 && c == 9) num_sol += 1;
                else{
                    if(c == 9) Try(r+1, 1);
                    else Try(r, c+1);
                }
            }
            arr[r][c] = 0;
        }
    }else if(r == 9 && c == 9) num_sol += 1;
    else{
        if(c == 9) Try(r+1, 1);
        else Try(r, c+1);
    }
}

int main(){
    input();
    Try(1, 1);
    cout << num_sol << endl;
    return 0;
}