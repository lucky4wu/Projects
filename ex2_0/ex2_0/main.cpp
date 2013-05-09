#include "demo1.h"

void main(){
	cout<<"调用 demo 1 中的函数修改静态全局变量a 的值："<<endl;
	demo1_func();
	demo1_func1();
	demo1_func2();
	cout<<endl;
	
	cout<<"调用 demo2 中的函数修改静态全局变量 a 的值："<<endl;
	demo2_func();
	demo2_func1();
	demo2_func2();
	cout<<endl;

	cout<<"在main 函数中修改静态全局变量 a 的值："<<endl;
	cout<<"the original value of a is "<<a <<endl;
	a+=3;
	cout<<"main(a+=3) ：	the value of a is "<<a<<endl;
	a=15;
	cout<<"main(a=15):	the value of a is "<<a<<endl;
	cout<<endl;

	system("pause");
}