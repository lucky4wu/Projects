#include "ex.cpp"

using namespace std;

extern int a; 
extern void func();

void main(){
	func();
	a = 100;
	cout<<"the value a is "<<a<<endl;
	system("pause");
}