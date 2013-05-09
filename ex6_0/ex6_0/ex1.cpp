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
		cout<<"请传递10以上的数值！"<<endl;
		return;
	}
	int sum = 0;
	for(int i=1;i<n+1;i++){
		sum+=i;
	}
	cout<<"从1 一直累加到 "<<n<<" 的和为"<<sum<<endl;
}

