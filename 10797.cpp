#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int com;
	int num;
	int cnt =0;
	cin>>com;
	for (int i = 0; i < 5; ++i)
	{
		cin>>num;
		if (com==num)
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}