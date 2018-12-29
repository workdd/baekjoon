#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int size;
	cin >>size;
	int p[size+1];
	for (int i = 1; i <= size; ++i)
	{
		cin>>p[i];
	}
	int dp[size+1];
	dp[1] =p[1];
	if (size>=2)
	{
		dp[2] = p[2]+dp[1];
		if (size>=3)
		{
			dp[3] = max(p[3]+dp[1],p[3]+p[2]);
			if (size>4)
			{
				for (int i = 4; i <= size; ++i)
				{
					dp[i] = max(p[i]+dp[i-2],p[i]+dp[i-3]+p[i-1]);
				}		
			}
		}

			
	}
	cout<<dp[size];
	return 0;
}