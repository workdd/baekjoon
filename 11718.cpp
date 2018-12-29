#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	char a;
	a = getchar();
	while(a!=-1) {
	    putchar(a);
	    a=getchar();
	}
	
	return 0;
}