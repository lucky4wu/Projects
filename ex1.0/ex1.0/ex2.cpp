#include <iostream>
using namespace std;

void func(){
	int a = 100;
	int *pa = &a;
	std::cout<<"����a��ֵ��"<<a<<endl;
	std::cout<<"����a�ĵ�ַ��"<<pa<<endl;
}