#include <iostream>
using namespace std;
bool check(int n){
	int numberbox[1001] ={0,};
	for (int i = 2; i < 1001; ++i)
	{
		for (int j = i+i; j < 1001; j+=i)
		{
			numberbox[j] =1;
		}
	}
	if (numberbox[n] ==0)
	{
		return true;
	}
	else{
		return false;
	}
}
int main(int argc, char const *argv[])
{
	
	return 0;
}