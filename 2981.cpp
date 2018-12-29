#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int count;
	cin>>count;
	int numberbox[101] ={1000000001,};
	for (int i = 0; i < count; ++i)
	{
		int num;
		cin>>numberbox[i];
		//cout<<numberbox[i];
	}
	int remainder;
	int check=0;
	sort(numberbox,numberbox+numberbox[count]);
		// for (int i = 0; i < count; ++i)
		// {
		// 	int num;
		// 	//cin>>numberbox[i];
		// 	cout<<numberbox[i];
		// }
	for (int i = 2; i <=numberbox[0] ; ++i)
	{
		//cout<<"i";
		//cout<<i;
		check=0;
		//cout<<check<<" ";
		for (int j = 1; j < count; ++j)
		{
			
			if (numberbox[j]%i==numberbox[j-1]%i)
			{
				//cout<<"check"<<" ";
				check++;
			}
			else{
				check =0;
				continue;
			}
		
			if (check==count-1)
			{
				cout<<i<<" ";
			}
			
		}
	}
	return 0;
}