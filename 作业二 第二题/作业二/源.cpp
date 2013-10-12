#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int data[101];
	for(int i=0;i<=100;i++){
		data[i]=i+100;
	    if(data[i]%3!=0&&data[i]%7!=0)
			cout<<data[i]<<endl;
	}
	system("pause");
}