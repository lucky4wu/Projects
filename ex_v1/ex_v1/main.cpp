#include "Base.cpp"

void main(){
	typedef void(*Fun)(void);

	Base b;

	Fun pFun = NULL;

	cout<<"虚函数表地址："<<(int*)(&b)<<endl;
	cout<<"虚函数表——第一个函数地址："<<(int*)*(int*)(&b)<<endl;
	cout<<"虚函数表——第2个函数地址："<<((int*)*(int*)(&b)+1)<<endl;
	cout<<"虚函数表——第3个函数地址："<<((int*)*(int*)(&b)+2)<<endl;

	pFun = (Fun)*(((int*)*(int*)(&b)+1));
	pFun();
	//return b;
	system("pause");
}
