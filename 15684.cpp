#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,h;
	cin>>n>>m>>h;
	int briage[h+1][n+1] ={0,};
	while(m>0) {
	    int a,b;
	    cin>>a>>b;
	    briage[a][b] = 1;
	    briage[a][b+1] =-1;
	    m--;
	}
	for (int i = 1; i <= n; ++i)
	{
		int v[h+1][n+1] ={0,};
		int j =1;
		int w =i;
		int count =0;
		while(true) {
			int savej,savew,save;
			cout<<v[j][w]<<"/";
		    do
			{
				v[j][w] = briage[j][w];
				if (v[j][w] ==1)
				{
					w++;
					savej =j;
					savew =w;
					save =1;
				}
				else if (v[j][w] ==-1)
				{
					w--;
					savej =j;
					savew =w;
					save =-1;
				}
				else{
					j++;
				}
				if (j==h)
				{
					if (w==i)
					{
						continue;
					}
					else{
						while(true) {
							if (briage[savej][savew+1] ==0)
							{
								briage[savej][savew+1] =1;
								briage[savej+1][savew+1] =-1; 
								count++;
								j=1;
								w=i;
								break;
							}
							if (briage[savej][savew+1] !=0)
							{
								savej++;
								continue;
							}
						}
						
					}
				}
				
			} while (j<h+1);
			
		}
		if (count>=3)
		{
			cout<<-1;
		}
		else{
			cout<<count;
		}
	}
	return 0;
}