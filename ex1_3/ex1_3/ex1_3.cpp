#include <iostream>
using namespace std;

void hello(){
	cout << "hello world!\n";
}
void runFun(void (*pFun)()){
	pFun();
}
void main(){
	runFun(hello);

	system("pause");
}