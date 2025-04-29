#include<bits/stdc++.h>
using namespace std;

int H, W;
int n;
int h, w;
int area[12][12];
pair<int, int> s_area[12];
int possible2Cut;

void input(){
    cin >> H >> W;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s_area[i].first >> s_area[i].second;
    }
}

// check whether can the remaining material into smaller one with size of (h_a, w_a)
// and start from (x_a, y_a)
bool canCut(int x_a, int y_a, int w_a, int h_a){
    for(int i=x_a; i<x_a+w_a; i++){
        for(int j=y_a; j<y_a+h_a; j++){
            if (area[i][j] == 1) return false;      // can not cut
        }
    }
    return true;
}

void cut(int x_a, int y_a, int w_a, int h_a){
    for(int i=x_a; i<x_a+w_a; i++){
        for(int j=y_a; j<y_a+h_a; j++){
            area[i][j] = 1;   // cut
        }
    }
}

void deCut(int x_a, int y_a, int w_a, int h_a){
    for(int i=x_a; i<x_a+w_a; i++){
        for(int j=y_a; j<y_a+h_a; j++){
            area[i][j] = 0;   // decut
        }
    }
}

bool outOfArea(int x_a, int y_a, int w_a, int h_a){
    if(x_a + w_a > W || y_a + h_a > H) return true;
    else return false;
}

void Try(int k){
    for(int x_a=0; x_a<W; x_a++){
        for(int y_a=0; y_a<H; y_a++){
            // original shape
            if(canCut(x_a, y_a, s_area[k].second, s_area[k].first) && !outOfArea(x_a, y_a, s_area[k].second, s_area[k].first)){
                // cout << "k = " << k << " " << x_a << " " << y_a << " " << s_area[k].second << " " << s_area[k].first << " " << endl;
                cut(x_a, y_a, s_area[k].second, s_area[k].first);
                if(k == n-1){
                    possible2Cut = 1;
                    return;
                }else Try(k+1);
                deCut(x_a, y_a, s_area[k].second, s_area[k].first);
            }

            // rotate 90 degree
            if(canCut(x_a, y_a, s_area[k].first, s_area[k].second) && !outOfArea(x_a, y_a, s_area[k].first, s_area[k].second)){
                // cout << "k = " << k << " " << x_a << " " << y_a << " " << s_area[k].first << " " << s_area[k].second << " " << endl;
                cut(x_a, y_a, s_area[k].first, s_area[k].second);
                if(k == n-1){
                    possible2Cut = 1;
                    return;
                }else Try(k+1);
                deCut(x_a, y_a, s_area[k].first, s_area[k].second);
            }
        }
    }
}

int main(){
    input();
    Try(0);
    cout << possible2Cut << endl;
    return 0;
}