#include <iostream>
using namespace std;
int gcd(int a,int b){
	if (b==0)
	{
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}
int main(int argc, char const *argv[])
{
	int count;
	cin>>count;
	int first;
	cin>>first;
	for (int i = 0; i < count-1; ++i)
	{
		int num;
		cin>>num;
		
		cout<<first/gcd(first,num)<<"/"<<num/gcd(first,num)<<"\n";
	}
	return 0;
}