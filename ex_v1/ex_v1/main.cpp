#include "Base.cpp"

void main(){
	typedef void(*Fun)(void);

	Base b;

	Fun pFun = NULL;

	cout<<"�麯�����ַ��"<<(int*)(&b)<<endl;
	cout<<"�麯��������һ��������ַ��"<<(int*)*(int*)(&b)<<endl;
	cout<<"�麯��������2��������ַ��"<<((int*)*(int*)(&b)+1)<<endl;
	cout<<"�麯��������3��������ַ��"<<((int*)*(int*)(&b)+2)<<endl;

	pFun = (Fun)*(((int*)*(int*)(&b)+1));
	pFun();
	//return b;
	system("pause");
}
