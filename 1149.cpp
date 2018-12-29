#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int size;
	cin>>size;
	int rgb[size+1][3];
	for (int i = 1; i <= size; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin>>rgb[i][j];
		}
	}
	int dp[size+1][3];
	dp[1][0]=rgb[1][0];
	dp[1][1]=rgb[1][1];
	dp[1][2]=rgb[1][2];
	for (int i = 2; i <= size; ++i)
	{
		dp[i][0] = min(dp[i-1][1],dp[i-1][2])+rgb[i][0];
		dp[i][1] = min(dp[i-1][0],dp[i-1][2])+rgb[i][1];
		dp[i][2] = min(dp[i-1][1],dp[i-1][0])+rgb[i][2];
	}
	int answer = min(dp[size][0],min(dp[size][1],dp[size][2]));
	cout<<answer;
	return 0;
}