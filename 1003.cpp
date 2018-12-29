#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int count;
	cin >>count;
	for (int i = 0; i < count; ++i)
	{
		int dp[41][2];
		int num;
		cin>>num;
		dp[0][0] =1;
		dp[0][1]=0;
		if (num>=1)
		{
			dp[1][0]=0;
			dp[1][1]=1;
			if (num>=2)
			{
				for (int j = 2; j <= num; ++j)
				{
					dp[j][0] = dp[j-1][0]+dp[j-2][0];
					dp[j][1] = dp[j-1][1]+dp[j-2][1];
				}
			}
		}
		cout<<dp[num][0]<<" "<<dp[num][1]<<"\n";
	}
	return 0;
}