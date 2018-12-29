#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	int n = num;
	int a,b,c;
	int cnt=0;
	do
	{
		a = n/10;
		b = n%10;
		c = (a+b)%10;
		a=b;
		b=c;
		n = a*10+b;
		cnt++;
	} while (n!=num);
	cout<<cnt;
	return 0;
}