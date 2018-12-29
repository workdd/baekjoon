#include <iostream>
using namespace std;
// int dp(int n){
// 	if (n==0||n==1||n==2)		
// 	{
// 		return 1;
// 	}
// 	else{
// 		return dp(n-2)+dp(n-3);
// 	}
// }
int main(int argc, char const *argv[])
{
	int count;
	cin >> count;
	long long dp[101] = {1,1,1};
	for (int i = 3; i < 101; ++i)
	{
		dp[i] = dp[i-2]+dp[i-3];
	}
	for (int i = 0; i < count; ++i)
	{
		int num;
		cin>>num;
		cout<<dp[num-1]<<"\n";
	}

	return 0;
}