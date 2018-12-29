#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int k;
	cin>>k;
	long long box[1000000];
	for (int i = 1; i < 1000000; ++i)
	{
		box[i] = i;
	}
	for (int i = 2; i <1000000; ++i)
	{
		if (box[i] ==0)
		{
			continue;
		}
		for (int j = i+i; j <1000000; j+=i)
		{
			box[j] =0;
		}
	}
	int m=2;
	int cnt =0;
	while(true) {
		
	    if (box[m] !=0)
	    {
	    	cnt++;
	    }
	    if (cnt == k)
		{
			cout<<box[m];
			break;
		}
	    m++;

	}
	return 0;
}