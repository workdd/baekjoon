#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	int dp[num+1][10] ={0,};
	for (int i = 1; i <=num; ++i)
	{
		for (int j = 0; j <= 9; ++j)
		{
			if (i ==1)
			{
				if (j==0)
				{
					dp[i][j] =0;
				}
				else{
					dp[i][j] =1;
				}
			}
			else{
				if (j==0)
				{
					dp[i][j] = dp[i-1][j+1]%1000000000;
				}
				else if(j==9)
				{
					dp[i][j] = dp[i-1][j-1]%1000000000;
				}
				else{
					dp[i][j] = (dp[i-1][j+1]+dp[i-1][j-1])%1000000000;
				}
			}
		}
	}
	long sum =0;
	for (int j = 0; j <=9; ++j)
	{
		sum+=dp[num][j];
	}
	cout<<sum%1000000000;
	return 0;
}