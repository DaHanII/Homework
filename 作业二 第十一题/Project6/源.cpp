#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int weight;
	cin>>weight;
	int distance;
	cin>>distance;
	int payment;
	int n=(weight-1)/15;
	if(n>4){
		n=4;
	}
	cout<<"���ã�"<<endl;
	switch(n){
	case 0:
		cout<<"5Ԫ"<<endl;
		break;
	case 1:
		cout<<"9Ԫ"<<endl;
		break;
	case 2:
		cout<<"12Ԫ"<<endl;
		break;
	case 3:
		if(distance>=1000){
			payment=14+distance/1000;
			cout<<payment<<"Ԫ"<<endl;
		}
		else
			cout<<"14Ԫ"<<endl;
		break;
	case 4:
		if(distance>=1000){
			payment=15+distance/1000;
			cout<<payment<<"Ԫ"<<endl;
		}
		else
			cout<<"15Ԫ"<<endl;
		break;
	default:
		cout<<"input error"<<endl;
	}
	system("pause");
}