#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int coin[n+1];
	int dp[k+1] ={0,};
	for (int i = 1; i <= n; ++i)
	{
		cin>>coin[i];
	}
	dp[0] =1;
	for (int i = 1; i <=n; ++i)
	{
		for (int j = 1; j <=k; ++j)
		{
			if (j-coin[i]>=0)	
			{
				dp[j] = dp[j] +dp[j-coin[i]];
			}
		}
	}
	cout<<dp[k];
	return 0;
}