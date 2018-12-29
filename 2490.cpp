#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	int cnt;
	for (int i = 0; i < 3; ++i)
	{
		cnt =0;
		for (int j = 0; j < 4; ++j)
		{
			cin>>num;
			if (num ==1)
			{
				cnt++;
			}
		}
		if (cnt==0)
		{
			cout<<"D"<<"\n";
		}
		if (cnt==1)
		{
			cout<<"C"<<"\n";
		}

		if (cnt==2)
		{
			cout<<"B"<<"\n";
		}
		if (cnt==3)
		{
			cout<<"A"<<"\n";
		}
		if (cnt==4)
		{
			cout<<"E"<<"\n";
		}
	}
	return 0;
}