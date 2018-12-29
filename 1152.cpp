#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	char c[1000001];
	int cnt =0;
	int i=0;
	int check =0;
	cin.getline(c,1000001);
	while(true) {
	    if (c[i] =='\0')
	    {
	    	break;
	    }
	    if (c[i]!=' ')
	    {
	    	if (check>0)
	    	{
	    		cnt++;
	    		check =0;
	    	}
	    }
	    if (c[i] ==' ')
	    {	
	    	check++;
	    }
	    if (cnt==0)
	    {
	    	if (c[i]!=' ')
	    	{
	    		cnt++;
	    	}
	    }
	    
	    i++;
	}
	cout<<cnt;
	return 0;
}