#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
using namespace std;

float arr[12];
int n;
vector<float> results;
int calculate(float n1,float n2, int idx){
    if(idx ==0){
        return n1 + n2;
    } else if (idx ==1){
        return n1 - n2;
    } else if (idx ==2 ){
        return n1 * n2;
    } else if (idx ==3){
        return n1/n2;
    }
}


int checking(int cur, float cur_num, int cal[4]){
    if (cur == n-1){
        results.push_back(cur_num);
        return 0;
    }
    for(int i=0; i<4; i++){
        if(cal[i]>0){
            cout<<i<< " ";
            cal[i] -=1;
            checking(cur +1 , calculate(cur_num, arr[cur+1],i),cal);
        }
    }
    return 0;
}

int main(){
    int cal[4];
    cin>> n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<4; i++){
        cin>> cal[i];
    }

    checking(0,arr[0],cal);
    float min, max = results[0];
    min =9999999999;
    for (int i=0; i< results.size(); i++){
        if(min > results[i]){
            min = results[i];
        }
        if(max < results[i]){
            max = results[i];
        }
    }
    cout<< max <<"\n";
    cout<< min;
}