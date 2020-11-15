#include <iostream>
#include <vector>
#include <utility>
using namespace std;

const int S_MAX = 27;
const int N_MAX = 50000000;



int main(){
    int n,x;
    cin>>n>>x;

    vector<int> values;

    for(int i=0; i<=n; i++){
        values.push_back(-1);
    }

    for(int i=n; i>0; i--){
        bool isValid = true;
        for(int j = 26; j>0; j--){
            if(x -j >= i-1){
                x-=j;
                values[i] = j;
                isValid = true;
                break;
            }
            else{
                isValid = false;
            }
        }
        if(isValid == false){
            break;
        }
    }
    if( x>0){
        cout<<"!";
    }
    else{
        for(int i=1; i<=n; i++){
            char ans = static_cast<char>(values[i] + 64);
            cout<<ans;
        }
    }
    
}
