#include "demo1.h"

void main(){
	cout<<"���� demo 1 �еĺ����޸ľ�̬ȫ�ֱ���a ��ֵ��"<<endl;
	demo1_func();
	demo1_func1();
	demo1_func2();
	cout<<endl;
	
	cout<<"���� demo2 �еĺ����޸ľ�̬ȫ�ֱ��� a ��ֵ��"<<endl;
	demo2_func();
	demo2_func1();
	demo2_func2();
	cout<<endl;

	cout<<"��main �������޸ľ�̬ȫ�ֱ��� a ��ֵ��"<<endl;
	cout<<"the original value of a is "<<a <<endl;
	a+=3;
	cout<<"main(a+=3) ��	the value of a is "<<a<<endl;
	a=15;
	cout<<"main(a=15):	the value of a is "<<a<<endl;
	cout<<endl;

	system("pause");
}