#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	int count =0;
	while(true) {
	    if (num<3&&num!=0)
	    {
	    	cout<<-1;
	    	break;
	    }
	    if (num ==0)
	    {
	    	cout<<count;
	    	break;
	    }
	    else{
	    	if (num%5 ==0)
	    	{
	    		cout<<num/5+count;
	    		break;
	    	}
	    	else{
	    		num -=3;
	    		count++;
	    	}
	    }
	}
	return 0;
}