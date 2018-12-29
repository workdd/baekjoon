#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	if (num ==0||num==1)
	{
		cout<<1;
	}
	else{
		int sum=1;
		for (int i = 1; i <=num; ++i)
		{
			sum*=i;
		}
		cout<<sum;
	}
	return 0;
}