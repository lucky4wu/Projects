#include <iostream>
using namespace std;

void func(){
	int a = 100;
	int *pa = &a;
	std::cout<<"这是a的值："<<a<<endl;
	std::cout<<"这是a的地址："<<pa<<endl;
}