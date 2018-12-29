	#include<iostream>
	using namespace std;
	int main(int argc, char const *argv[])
	{

		
		int count;
		cin >>count;
		
		for (int i = 1; i <= count; ++i)
		{
			int num;
			cin>>num;
			int dp[num+1] ={0,};
			dp[1]=1;
			dp[2]=2;
			dp[3]=4;
			for (int j = 4; j <=num; ++j)
			{
				dp[j] = dp[j-1]+dp[j-2]+dp[j-3];
				//cout<<dp[j];
			}
			cout<<dp[num]<<"\n";
		}

		return 0;
	}