#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	int box[num];

	for (int i = 0; i < num; ++i)
	{
		cin>>box[i];
	}
	sort(box,box+num);

	int m;
	cin>>m;
	int com;
	int cnt;
	for (int i = 0; i < m; ++i)
	{
		cnt =0;
		cin>>com;
		while(/* condition */) {
		    /* code */
		}
		
	}
	return 0;
}