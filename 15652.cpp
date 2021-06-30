#include <iostream>
#include <vector>
using namespace std;

int arr[9];

int checking(int n, int m,int cur){
    if(cur == m){
        for(int i=0; i<cur; i++){
            cout<<arr[i] <<" ";
        }
        cout<<"\n";
        return 0;
    }

    for(int i =arr[cur-1]; i<=n; i++){
        if(i == 0) continue;
        arr[cur] =i;
        checking(n,m,cur+1);
    }
    return 0;
}

int main(){
    int n,m;
    cin>> n>> m;
    checking(n,m,0);
}