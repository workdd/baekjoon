#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int m,n;
	int sum =0;
	int check =0;
	int save=0;
	int sav;
	cin>>m>>n;
	for (int i = m; i <= n; ++i)
	{
		check =0;
		if (i ==1)
		{
			continue;
		}
		if (i==2)
		{
			sum+=2;
			sav =2;
			continue;
		}
		for (int j = 2; j <i; ++j)
		{
			if (i%j==0)
			{
				
				check++;
				break;
			}

		}
		if (check==0)
		{
			if (save ==0&&sav!=2)
			{
				sav =i;
			}
			sum+=i;
			save++;
		}
		
	}
	if (sum==0)
	{
		cout<<-1;
	}
	else{
		cout<<sum<<"\n"<<sav;
	}
	
	return 0;
}