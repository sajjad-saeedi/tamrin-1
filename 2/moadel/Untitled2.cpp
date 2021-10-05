#include <iostream>
using namespace std;
#include <conio.h>
 
 
 int main (){
 
 float dars1,dars2,dars3;
 float avarege=0;
cout<<"enter dars aval:";
cin>>dars1;
cout<<"enter dars dovom:";
cin>>dars2;
cout<<"enter dars sevom:";
cin>>dars3;
avarege = (dars1+dars2+dars3)/3;
if(avarege<12){
	cout<<"fail";}
	else if(12<=avarege<17){
		cout<<"normal";
		
	}
	else {
		cout<<"great";
	}
}

 
 
 
 
 
