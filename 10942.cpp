#include <iostream>
using namespace std;

int dp[2001][2001] = {-1,};
int lst[2001] = {-1,};

int cal(int s, int e){
    if(dp[s][e] != -1){
        return dp[s][e];
    } 

    int isPal = 0;
    if(lst[s] == lst[e]){
        isPal = 1;
    }
    if(isPal ==0){
        dp[s][e] = 0;
        return dp[s][e];
    }
    dp[s][e] = cal(s+1,e-1) * isPal;
    return dp[s][e];
}


int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin>> N;
    for(int i=1; i<=N;i++){
        cin>>lst[i];
    }
    
    for(int i=1;i<=N; i++){
        for(int j=i;j<=N;j++){
            dp[i][j] = -1;
            if(i == j) dp[i][j] = 1;
            else if(j - i == 1) {
                if(lst[i] == lst[j]) dp[i][j] = 1;
                else dp[i][j] = 0;
            }
        }
    }
    for(int i=1; i<=N; i++){
        for(int j=i+2; j<=N; j++){
            if(dp[i][j] == -1) cal(i,j);
        }
    }
    int M;
    cin>> M;
    int S,E;
    for(int i=0; i<M; i++){
        cin>>S>>E;
        cout<<dp[S][E]<<"\n";
    }
}