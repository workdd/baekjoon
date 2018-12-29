#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int box[8];
	for (int i = 0; i < 8; ++i)
	{
		cin>>box[i];
	}
	int anum=0;
	int dnum=0;
	for (int i = 0; i < 8; ++i)
	{
		if (i==0&&box[0] == 1)
		{

			anum++;
			//cout<<anum<<" ";
		}
		if (i==0&&box[0]==8)
		{
			dnum++;
		}
		if (anum>0&&i>0)
		{
			if (box[i] ==i+1)
			{
				anum++;
			}
			else{
				cout<<"mixed";
				break;
			}
		}
		if (dnum>0&&i>0)
		{
			if (box[i] ==8-i)
			{
				dnum++;
			}
			else{
				cout<<"mixed";
				break;
			}
		}
	}
	if (anum ==8)
	{
		cout<<"ascending";

	}
	if (dnum==8)
	{
		cout<<"descending";
	}
	return 0;
}