#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char data[26];
	data[0]='A';
	for(int i=1;i<26;i++){
		data[i]=data[i-1]+1;
	}
	cout<<"ÄæÐò-----"<<endl;
    for(int k=25;k>=0;k--){
			cout<<data[k]<<endl;
	}
	cout<<"Ë³Ðò-----"<<endl;
	for(int j=0;j<26;j++){
			cout<<data[j]<<endl;
	}
    system("pause");
}