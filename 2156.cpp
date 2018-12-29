#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int count;
	cin >>count;
	int p[count+1]={0,};
	for (int i = 1; i <= count; ++i)
	{
		cin>>p[i];
	}
	int dp[count+1]={0,};
	dp[1] =p[1];
	dp[2]= p[1]+p[2];
	for (int i = 3; i <= count; ++i)
	{
		dp[i] = max(max(p[i]+p[i-1]+dp[i-3],p[i]+dp[i-2]),dp[i-1]);
	}
	cout<<dp[count];
	return 0;
}