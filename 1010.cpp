#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int count;
	cin >>count;
	for (int k = 0; k < count; ++k)
	{
		int n,m;
		cin>>n>>m;
		int dp[n+1][m+1] ={0,};
		//int p[n+1][m+1] ={0,};
		for (int i = 1; i <=n; ++i)
		{
			for (int j = 1; j <=m; ++j)
			{
				if (i==1)
				{
					dp[i][j] =j;
				}
				else if (i ==j)
				{
					dp[i][j] =1;
				}
				else{
					dp[i][j] =dp[i-1][j-1]+dp[i][j-1];
				}
			}
		}
		cout<<dp[n][m]<<"\n";
	}
	return 0;
}