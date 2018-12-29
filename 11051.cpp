#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int dp[1001][1001] ={0,};
	dp[0][0] =1;
	dp[1][0] =1;
	dp[1][1] =1;
	int n,k;
	cin>>n>>k;
	for (int i = 2; i <= n; ++i)
	{
		for (int j = 0; j <= k; ++j)
		{
			dp[i][j] = dp[i-1][j-1]%10007+dp[i-1][j]%10007;
			dp[i][j]%=10007;
		}
	}
	cout<<dp[n][k];
	return 0;
}