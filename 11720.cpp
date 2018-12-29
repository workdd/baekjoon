#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	char box[num];
	int sum=0;
	for (int i = 0; i < num; ++i)
	{
		cin>>box[i];
		//cout<<(int)box[i]<<"\n";
		sum+=(int)box[i]-48;
	}
	cout<<sum;

}