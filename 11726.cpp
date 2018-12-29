#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	cin >>num;
	long long dp[num+1];
	dp[1] = 1;
	if (num>=2)
	{
		dp[2] =2;
		if (num>=3)
		{
			dp[3] =3;
			if (num>=4)
			{
				for (int i = 4; i <= num; ++i)
				{
					dp[i] = (dp[i-1]+dp[i-2])%10007;
				}
				
			}
		}
	}
	cout<<dp[num]%10007;
	return 0;
}