#include <iostream>
using namespace std;
#include <conio.h>;
#include <math.h>

int main(){
	float hight;
	float weight;
	float bmi=0;

	cout<<"enter hight;";
cin>>hight;
cout<<"enter weight";
cin>>weight;
bmi=weight/hight;
if(bmi<18){
	cout<<"underweight";
}
	else if (18<bmi<24.9){
		cout<<"normal";
	}
	else if (25<bmi<29.9){
		cout<<"overweight";
		
	}
	else if (30<bmi<34.4){
		cout<<"obese";
	}
	else{
		cout<<"extremly obese";
	}
	
	
	
	
	
	
	
	
	
	
	
}
