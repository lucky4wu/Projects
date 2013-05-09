#include "demo1.h"

void demo1_func(){
	cout<<"the original value of a is"<<a<<endl;
}
void demo1_func1(){
	a++;
	cout<<"demo1_func1:	the value of a is "<<a<<endl;
}
void demo1_func2(){
	a+=10;
	cout<<"demo1_func2: the value of a is "<<a<<endl;
}