#include <iostream>
using namespace std;

static int a;
void func1(){
	a = 5;	
}
void func2(){
	a = 7;
}

void func3(){
	static int b;
	b = 5;
}
void func4(){
	//b = 8;
}