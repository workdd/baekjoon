#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	int dp[num+1]={0,};
	dp[1] =1;
	if (num>=2)
	{
		dp[2] =3;
	}
	for (int i = 3; i <=num; ++i)
	{

		dp[i] =(dp[i-1]+dp[i-2]*2)%10007;
	}
	cout<<dp[num]%10007;
	return 0;
}