#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	int box[1001] ={0,};
	cin >>n>>k;
	int cnt =0;
	for (int i = 2; i <=n; ++i)
	{
		box[i] =1;
	}
	for (int i = 2; i <=n; ++i)
	{
		for (int j = i; j <=n; j+=i)
		{
			if (box[j]==1)
			{
				cnt++;
				box[j] =0;
				if (cnt ==k)
				{
					cout<<j;
					break;
				}
			}
		}
	}


	return 0;
}