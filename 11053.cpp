#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int size;
	cin>>size;
	int box[size+1];
	int dp[size+1] ={1,};
	int now;
	for (int i = 1; i <= size; ++i)
	{
		cin>>box[i];
	}
	int answer;
	answer = dp[0];
	for (int i = 1; i <=size; ++i)
	{
		now =0;
		for (int j = 1; j < i; ++j)
		{
			if (box[j] <box[i])
			{
				now = max(now,dp[j]);
				
			}
		}
		dp[i]= now+1;
		//cout<<dp[i]<<" ";
		answer =max(answer,dp[i]);
	}
	cout<<answer;
	return 0;
}