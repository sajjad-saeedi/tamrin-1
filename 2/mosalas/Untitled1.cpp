#include <iostream>
using namespace std;
#include <conio.h>

int main(){
	int a,b,c;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"enter c:";
	cin>>c;
	if(a>b+c){
		cout<<"yes";
	}
	else if(b>a+c){
		cout<<"yes";
	}
	else if(c>b+a){
		
		cout<<"yes";
	
	}
	else{
		cout<<"no";
	}
	getch();
	
	
}
