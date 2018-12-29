#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int count;
	int cnt =0;
	cin>>count;
	for (int i = 0; i < count; ++i)
	{
		int a;
		int check =0;
		cin>>a;
		//cout<<a<<" "<<i<<"\n";
		if (a ==1)
		{
			continue;

		}
		if (a==2)
		{
			cnt++;
			continue;
		}
		for (int j = 2; j < a; ++j)
		{
			if (a%j==0)
			{
				check++;
				break;
			}
		}
		if (check ==0)
		{
			cnt++;
		}
		

	}
	cout<<cnt;
	return 0;
}