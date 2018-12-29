#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int x,y,w,h;
	cin>>x>>y>>w>>h;
	int a,b,c,d;
	a =w-x;
	b=h-y;
	c=x;
	d=y;
	int mn=a;
	int arr[4] ={a,b,c,d};
	for (int i = 0; i < 4; ++i)
	{
		if (mn>arr[i])
		{
			mn = arr[i];
		}
	}
	cout<<mn;

	return 0;
}