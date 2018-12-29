#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	string str;
	char arr[5][16]={'\0'};
	int size;
	for (int i = 0; i < 5; ++i)
	{
		cin>>str;
		
		if (i ==0)
			{
				size = str.size();
			}
			else if (size<str.size())
			{
				size = str.size();
			}
		for (int j = 0; str[j] !='\0'; ++j)
		{
			arr[i][j] = str[j];
			
			//cout<<str[j];
		}
	}
	
	for (int j = 0; j<size; ++j)
	{
		for (int i = 0; i < 5; ++i)
		{
			if (arr[i][j]=='\0')
			{
				continue;
					
			}
			cout<<arr[i][j];
			
		}
	}

	return 0;
}