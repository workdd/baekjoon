#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int count;
	int num;
	cin>>count>>num;
	int box[count+1];
	int cnt =0;
	for (int i = 0; i < count; ++i)
	{
		cin>>box[i];
		if (box[i]<num)
		{
			if (cnt!=0)
			{
				cout<<" ";
			}
			cout<<box[i];
			cnt++;
			
		}
	}

	return 0;
}