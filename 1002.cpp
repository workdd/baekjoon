#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int count;
	cin>>count;
	for (int i = 0; i < count; ++i)
	{
		int x1,y1,r1;
		int x2,y2,r2;
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		if (x1==x2&&y1==y2&&r1==r2)
		{
			cout<<-1<<"\n";
			// break;
		}
		else{
			float d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
			if (d==r1+r2||d==abs(r1-r2))
			{
				cout<<1<<"\n";
				// break;
			}
			else if (d>r1+r2||d<abs(r1-r2))
			{
				cout<<0<<"\n";
				// break;
			}
			else{
				cout<<2<<"\n";
				// break;
			}	
		}
		
	}
	

	return 0;
}