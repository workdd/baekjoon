#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int sum;
	int num;
	int su=0;
	cin>>sum;
	for (int i = 0; i < 9; ++i)
	{
		cin>>num;
		su+=num;
	}
	cout<<sum-su;
	return 0;
}