#include <iostream>
#include <bitset>
using namespace std;
bool cal(bitset<8> wheel,int where){
	if (where ==1)
	 {
	 	if (wheel[0]==1)
	 	{
	 		wheel>>=1;
	 		wheel[7] = 1;
	 	}
	 	else{
	 		wheel>>=1;
	 	}
	 }
	else if (where ==-1)
	{
		if (wheel[7]==1)
		{
			where<<=1;
			wheel[0] =1;
		}
		else{
			wheel>>=1;
		}
	} 
}



int main(int argc, char const *argv[])
{
	bitset<8> bi;
	bitset<8> box[4];
	for (int i = 0; i < 4; ++i)
	{
		cin>>bi;
		box[i] = bi;
	}
	int count;
	cin>>count;
	for (int i = 0; i < count; ++i)
	{
		

		int whl,whre;
		cin>>whl>>whre;
		for (int j = 0; j < 4; ++j)
		{
			check = box[whl];
			checked = box[whl-1];
			bool left,right;
			left = check[5];
			right= check[1];
			if (left == checked[1])
			{
				cal(whl,whre);	
			}
				
		}
		

	}
	return 0;
}
