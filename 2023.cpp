#include <iostream>
#include <string>
#include <cmath>
using namespace std;


bool isPrime(int n){
    if (n<2) return false;
    for (int i=2; i*i<=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

bool isUnique(int num){
    string n = to_string(num);
    for(int i=1; i<=n.length(); i++){
        if(isPrime(stoi(n.substr(0,i)))){
            continue;
        } else{
            return false;
        }
    }
    return true;
}

int checking(int num, int origin){
    if(num >= origin*10){
        return 0;
    }
    if(isUnique(num)){
        cout<<num<<"\n";
    }
    checking(num+1,origin);
    return 0;
}


int main(){
    int n;
    cin>> n;
    int num = pow(10,n-1);
    checking(num,num);
}