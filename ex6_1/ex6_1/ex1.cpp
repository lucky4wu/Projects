#include <iostream>
using namespace std;

void exchange1(int a, int b){
	cout<<"���ô�ֵ����ʵ�ֱ���ֵ������"<<endl;
	int temp = b;
	b = a;
	a = temp;
	cout<<"��ֵ�����н����Ľ����a = "<<a<<"; b = "<<b<<endl;
}

void exchange2(int &a, int &b){
	cout<<"���ô�ֵ����ʵ�ֱ���ֵ������"<<endl;
	int temp = b ;
	b = a;
	a = temp ;
	cout<<"��ַ�����н����Ľ����a = "<<a<<"; b = "<<b<<endl;
}

void main(){
	int a=5,b=10;
	exchange1(a,b);
	cout<<"��ֵ�������ú�Ľ����a = "<<a<<"; b = "<<b<<endl<<endl;
	exchange2(a,b);
	cout<<"��ַ�������ú�Ľ����a = "<<a<<"; b = "<<b<<endl;

	system("pause");
}