#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	char a[101];
	cin >>a;
	for (int i = 0; i < 101; ++i)
	{
		if (i!=0&&i%10==0)
		{
			cout<<"\n";
		}
		if (a[i] =='\0')
		{
			break;
		}
		cout<<a[i];

	}
	return 0;
}