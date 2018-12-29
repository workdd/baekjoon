#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	while(true){
		int n;
		cin>>n;
		if (n==0)
		{
			break;
		}
		int numberbox[n+n+1] ={0,};
		int cnt=0;
		if (n==1)
		{
			cout<<1<<"\n";
			continue;
		}
		for (int i = 2; i <= n+n; ++i)
		{
			if (numberbox[i] ==1)
			{
				continue;
			}
			for (int j = i+i; j <= n+n; j+=i)
			{
				//cout<<j<<" ";
				numberbox[j] =1;
			}
		}
		for (int k = n+1; k <= n+n; ++k)
		{
			//cout<<k<<" ";
			if (numberbox[k]==0)
			{
				cnt++;
			}
		}
		cout<<cnt<<"\n";

	}
	return 0;
}