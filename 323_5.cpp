#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int count;
	cin>>count;
	int box[count] ={0,};
	for (int i = 0; i < count; ++i)
	{
		cin>>box[i];
	}
	sort(box,box+count);
	
	return 0;
}