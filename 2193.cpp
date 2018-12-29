#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	cin >>num;
	long long dp[num+1];
	if (num>=1)
	{
		dp[1]=1;
		if (num>=2)
		{
			dp[2]=1;
			if (num>=3)
			{
				for (int i = 3; i <= num; ++i)
				{
					dp[i] = dp[i-1]+dp[i-2];
				}
			}
		}
	}
	cout<<dp[num];
	return 0;
}