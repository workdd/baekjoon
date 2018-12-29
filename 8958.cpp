#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	int count;
	cin>>count;
	for (int j = 0; j < count; ++j)
	{
		string ox;
		cin>>ox;
		int sum =0;
		int cnt =0;
		
		//cout<<ox[0]<<"\n";
		for (int i = 0; i < ox.size(); ++i)
		{
			if (ox[i] =='O')
			{
				cnt++;

			}
			else{
				cnt =0;
			}
			sum+=cnt;
			
		}
		cout<<sum<<"\n";
	}
	return 0;
}