// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	char box[26] = {'y','h','e','s','o','c','v','x','d','u','i','g','l','b','k','r','z','t','n','w','j','p','f','m','a','q'};
	int num;
	cin>>num;
	cin.ignore();
	for (int i = 1; i <= num; ++i)
	{
		char st[200];
		cin.getline(st,200);
		
		cout<<"Case #"<<i<<": ";
		
		
		for (int k = 0; st[k]!= '\0'; ++k)
		{

			if (st[k]==' ')
			{
				cout<<' ';
			}
			else{
				cout<<box[st[k]-'a'];
			}
		}
		cout<<"\n";
	}
	return 0;
}