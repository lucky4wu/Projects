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

	cout<<"���α���"<<endl;
	cout<<"int���α�����ռ���ڴ�ռ�Ϊ��"<<sizeof(ia)<<" �ֽ�"<<endl;
	cout<<"short�����α�����ռ���ڴ�ռ�Ϊ��"<<sizeof(sa)<< "�ֽ�"<<endl;
	cout<<"long�����ͱ�����ռ���ڴ�ռ�Ϊ��"<<sizeof(la)<<" �ֽ�"<<endl<<endl;

	cout<<"ʵ�ͱ���"<<endl;
	cout<<"floatʵ�ͱ�����ռ���ڴ�ռ�Ϊ��"<<sizeof(fa)<<" �ֽ�"<<endl;
	cout<<"double˫����ʵ�ͱ�����ռ���ڴ�ռ�Ϊ��"<<sizeof(da)<<" �ֽ�"<<endl<<endl;

	cout<<"�ַ��ͱ���"<<endl;
	cout<<"char�ַ��ͱ�����ռ���ڴ�ռ�Ϊ��"<<sizeof(ca)<<" �ֽ�"<<endl;
	cout<<"wchar_t ���ַ��ͱ�����ռ���ڴ�ռ�Ϊ��"<<sizeof(wa)<<" �ֽ�"<<endl<<endl;

	cout<<"�����ͱ���"<<endl;
	cout<<"�����ͱ����������ڴ�ռ�Ϊ��"<<sizeof(ba)<<" �ֽ�"<<endl<<endl;


	system("pause");
}