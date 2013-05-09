#include <iostream>
//#include <cstdlib>
using namespace std;

int max(int x, int y){
	return(x>y?x:y);
}

void main(){
	int (*ptr)(int, int);
	int a,b,c;
	ptr = max;
	cin>>a>>b;
	c=(*ptr)(a, b);
	cout<<"a="<<a<<",b="<<b<<",max="<<c<<endl;

	system("pause");
}