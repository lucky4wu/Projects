#include <iostream>
using namespace std;

double max(double a, double b){
	return a>b?a:b;
}

void show(){
	cout<<"hello! "<<endl;
	return ;
}

void outsum(int n){
	if(n<10){
		cout<<"�봫��10���ϵ���ֵ��"<<endl;
		return;
	}
	int sum = 0;
	for(int i=1;i<n+1;i++){
		sum+=i;
	}
	cout<<"��1 һֱ�ۼӵ� "<<n<<" �ĺ�Ϊ"<<sum<<endl;
}

