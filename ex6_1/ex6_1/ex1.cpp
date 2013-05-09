#include <iostream>
using namespace std;

void exchange1(int a, int b){
	cout<<"调用传值函数实现变量值互换："<<endl;
	int temp = b;
	b = a;
	a = temp;
	cout<<"传值函数中交换的结果：a = "<<a<<"; b = "<<b<<endl;
}

void exchange2(int &a, int &b){
	cout<<"调用传值函数实现变量值互换："<<endl;
	int temp = b ;
	b = a;
	a = temp ;
	cout<<"传址函数中交换的结果：a = "<<a<<"; b = "<<b<<endl;
}

void main(){
	int a=5,b=10;
	exchange1(a,b);
	cout<<"传值函数调用后的结果：a = "<<a<<"; b = "<<b<<endl<<endl;
	exchange2(a,b);
	cout<<"传址函数调用后的结果：a = "<<a<<"; b = "<<b<<endl;

	system("pause");
}