#include <iostream>
using namespace std;
int fac(int n){
	if (n ==0)
	{
		return 1;
	}
	int num=1;
	for (int i = 1; i <= n; ++i)
	{
		//cout<<"Fac"<<" ";
		num =num*i;

	}
	return num;
	}

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	//cout<<fac(a);
	int ans = fac(a)/(fac(b)*fac(a-b));
	cout<<ans;
	//cout<<fac(5);
	return 0;
}