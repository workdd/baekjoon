#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	string com;
	string a;
	string b;
	if (num ==1)
	{
		cin>>com;
		cout<<com;
	}
	else{
		for (int i = 0; i < num-1; ++i)
		{
			

			if (i==0)
			{
				cin>>a>>b;
				for (int j = 0; j < a.size(); ++j)
				{
					if (a[j] != b[j])
					{
						a[j] ='?';
						b[j] ='?';
					}
				}
				com = b;
			}
			else{
				cin>>a;
				for (int j = 0; j < a.size(); ++j)
				{
					if (a[j] != com[j])
					{
						a[j] ='?';
						com[j] ='?';
					}
				}
			}

			
		}
	}
	cout<<a;
	return 0;
}