#include <iostream>
using namespace std;
int main(){
	/*
	
//	Pointers....
	int *p,var=100;
	
	p=&var;
	
	cout<<"Address of var "<<&var<<endl;
	cout << "Address of var "<< p<< endl;
	cout << "Address of p " << &p<<endl;
	cout << "Value of var " <<*p<<endl;	
	*/
	
	
	int firstvalue,secondvalue;
	int *myvalue;
	
	myvalue = &firstvalue;
	*myvalue = 20;
	myvalue = &secondvalue;
	*myvalue = 40;
	
	cout << "First value: "<<firstvalue<< endl;
	cout << "Second value: "<< secondvalue<< endl;
	
}
