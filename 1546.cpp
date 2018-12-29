#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int count;
	cin>>count;
	float box[count];
	float mx =0;
	for (int i = 0; i < count; ++i)
	{
		cin>>box[i];
		if (mx<box[i])
		{
			mx = box[i];
		}
	}
	float sum=0;
	for (int i = 0; i < count; ++i)
	{
		box[i] = (box[i]/mx)*100;
		sum+=box[i];
	}
	cout.precision(4);
	cout<<sum/count;

	return 0;
}