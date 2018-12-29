#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int count;
	cin>>count;
	for (int i = 0; i < count; ++i)
	{
		float a,b;
		cin>>a>>b;
		float num = (float)a/b;
		//cout<<num;
		float j =2.0;
		while(true){
			float com = (float)1.0/j;
			if (num>=com)
			{
				num = num-com;
				cout<<num<<" ";
				if (num ==0)
				{
					cout<<j<<"\n";
					break;
				}
				
			}
			
			//cout<<j<<" ";
			j +=1.0;
		}
	}
	return 0;
}