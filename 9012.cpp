#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool check(string str){
	int leng = (int)str.length();
	stack<char> st;
	for (int i = 0; i < leng; ++i)
	{
		if (str[i] =='(')
			{
				st.push(str[i]);
			}
		else{
			if (!st.empty())
			{
				st.pop();
			}
			else{
				return false;
			}
		}	
	}
	return st.empty();
}
int main(int argc, char const *argv[])
{
	int count;
	cin>>count;
	
	for (int k = 0; k < count; ++k)
	{
		
		string str;
		cin>>str;
		
		if (check(str))
		{
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}