#include<iostream>
using namespace std;

	struct person
	{
	char name[50];
	int age;
	float salary;
	};

int main()
{
	person p1;
	cout<< "Enter full name: ";
	cin.get(p1.name,50);
	
	cout<< "Enter your age: ";
	cin>>p1.age;
	
	cout<< "Enter your salary: ";
	cin>> p1.salary;
	
	cout<< " Displaying your Data:\n	";
	cout<< "Name: "<<p1.name<<endl;
	cout<< "Age: "<<p1.age<<endl;
	cout<< "Salary: "<<p1.salary<<endl;
	
	return 0;
}
