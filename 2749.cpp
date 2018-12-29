#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long num;
	cin>>num;

	int fibo[1500001] ={0,};
	fibo[1] =1;
	for (int i = 2; i < 1500001; ++i)
	{
		fibo[i] = (fibo[i-1] +fibo[i-2])%1000000;
	}
	cout<<fibo[num%1500000];
	return 0;
}