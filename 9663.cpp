#include <iostream>
#include <cmath>

using namespace std;

int chess[15];
int cnt =0;
int checking(int n,int p){
    if(p == n){
        cnt++;
        return cnt;
    }

    for (int i=0; i<n; i++){
        chess[p] = i;
        bool isCheck = true;
        for(int i=0; i< p; i++){
            if(chess[p] == chess[i] || abs(p -i) == abs(chess[p] - chess[i])){
                isCheck = false;
                break;
            }
        }
        if(isCheck){
            checking(n, p+1);
        }
    }
}

int main(){
    int n;
    cin>> n;
    checking(n,0);
    cout<<cnt;
}