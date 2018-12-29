#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int count;
	cin>>count;
	for (int j = 0; j < count; ++j)
	{
		int size;
		cin>>size;
		float box[size] ={0,};
		float sum =0;
		for (int i = 0; i < size; ++i)
		{
			cin>>box[i];
			sum+=box[i];
		}
		float pung = sum/size;
		float cnt =0;
		for (int i = 0; i < size; ++i)
		{
			if (pung<box[i])
			{
				cnt++;
			}
		}
		float answer =(cnt/size)*100;
		cout<<fixed;
		cout.precision(3);
		cout<<answer<<"%"<<"\n";

	}
	return 0;
}