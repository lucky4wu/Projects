#include <iostream>
using namespace std;
void main(){
	int ia;
	short sa;
	long la;

	double da;
	float fa;

	char ca;
	wchar_t wa;

	bool ba;

	cout<<"整形变量"<<endl;
	cout<<"int整形变量的占用内存空间为："<<sizeof(ia)<<" 字节"<<endl;
	cout<<"short短整形变量的占用内存空间为："<<sizeof(sa)<< "字节"<<endl;
	cout<<"long长整型变量的占用内存空间为："<<sizeof(la)<<" 字节"<<endl<<endl;

	cout<<"实型变量"<<endl;
	cout<<"float实型变量的占用内存空间为："<<sizeof(fa)<<" 字节"<<endl;
	cout<<"double双精度实型变量的占用内存空间为："<<sizeof(da)<<" 字节"<<endl<<endl;

	cout<<"字符型变量"<<endl;
	cout<<"char字符型变量的占用内存空间为："<<sizeof(ca)<<" 字节"<<endl;
	cout<<"wchar_t 宽字符型变量的占用内存空间为："<<sizeof(wa)<<" 字节"<<endl<<endl;

	cout<<"布尔型变量"<<endl;
	cout<<"布尔型变量的真用内存空间为："<<sizeof(ba)<<" 字节"<<endl<<endl;


	system("pause");
}