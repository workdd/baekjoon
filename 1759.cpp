#include <iostream>
#include <algorithm>
using namespace std;

char alpha[16];

int checking(string pw){
    int con =0;
    int vow =0;
    for(int i=0; i<pw.length(); i++){
        if (pw[i] == 'a' || pw[i] == 'e' || pw[i] == 'i' || pw[i] == 'o' || pw[i] == 'u'){
            vow ++;
        } else {
            con ++;
        }
    }
    int ret =0;
    if(con >=2 && vow >=1){
        ret = 1;
    }
    return ret;
}

int make(int L,int C, int cnt, string pw){
    if (pw.length() == L){
        if (checking(pw)){
            cout<< pw << "\n";
        }
        return 0;
    }

    if (cnt == C){
        return 0;
    }
    make(L,C, cnt+1,pw+alpha[cnt]);
    make(L,C, cnt+1,pw);
}

int main(){
    int L,C;
    cin>> L>> C;
    for(int i=0; i<C;i++){
        cin>> alpha[i];
    }
    sort(alpha, alpha+C);
    make(L,C,0,"");
    
    return 0;
}