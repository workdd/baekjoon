#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	int p[num+1][num+1] ={0,};
	for (int i = 1; i <= num; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cin>>p[i][j];
		}
	}
	int dp[num+1][num+1] ={0,};
	dp[1][1] = p[1][1];
	for (int i = 2; i <=num; ++i)
	{

		for (int j = 1; j <= i; ++j)
		{
			if (j==1)
			{
				dp[i][1] = dp[i-1][1]+p[i][1];
			}
			else if (j==i)
			{
				dp[i][j] = dp[i-1][j-1]+p[i][j];
			}
			else{
				dp[i][j] = max(dp[i-1][j-1],dp[i-1][j])+p[i][j];
			}
		}
	}
	int max=0;
	for (int i = 1; i <= num; ++i)
	{
		if(max<=dp[num][i]){
			max = dp[num][i];
		}
	}
	cout<<max;

	return 0;
}