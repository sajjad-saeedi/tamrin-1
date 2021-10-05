#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
#include <conio.h>
int main(){
	int a,b;
	string op;
	cout<<"enter a ";
	cin>>a;
	cout<<"enter b ";

	
cin>>b;
	cout<<"enter op";
cin>>op;
if(op=="*"){
	
	cout<<a*b;
	
}	
else if(op=="cos"){
a=a*M_PI/180;
	cout<<cos(a);
}else if (op=="tan"){
	a=a*M_PI/180;
	cout<<tan(a);
	
}
	
	else if (op=="cot"){
		a=a*M_PI/180;
		
		cout<<1/tan(a);
	}
	
	else if (op=="radical"){
		
		cout<<sqrt(a);
	}
else
cout<<"bye";
	
	
	
	
	
}
