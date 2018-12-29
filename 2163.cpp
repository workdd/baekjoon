#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int dp[n+1][m+1] ={0,};
	for (int i = 1; i <=n; ++i)
	{
		dp[n][1] = n-1;
	}
	for (int i = 1; i <=n; ++i)
	{
		for (int j = 2; j <=m; ++j)
		{
			dp[i][j] = dp[i][1]*j+m-1;
		}
	}
	cout<<dp[n][m];
	return 0;
}