#include<iostream>
using namespace std;

 int main ()  {
 	
 	int x,a,b;
 	cout<<"Enter a number: "<< endl;
 	cin>> x;
 	
 	a=2;
 	b=3;
 	
 	if(x%a==1 && x%b!=0) 
	 
 	cout<<" prime number"<<x<<endl;
 	
 	else
 	cout<<"it is not a prime number: "<<x;
 	
  	
 	return 0;
 }