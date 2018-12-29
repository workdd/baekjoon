#include<iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	int p[num+1] ={0,};
	for (int i = 1; i <= num; ++i)
	{
		cin>>p[i];
	}
	int dp[num+1] ={0,};
	dp[1] = p[1];
	for (int i = 2; i <= num; ++i)
	{
		dp[i] = max(p[i],p[i]+dp[i-1]);
	}
	int mx =dp[1];
	for (int i = 2; i <= num; ++i)
	{
		if (mx<dp[i])
		{
			mx = dp[i];
		}
	}
	cout<<mx;
	return 0;
}