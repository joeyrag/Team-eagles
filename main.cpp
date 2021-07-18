#include "employee.h"
#include <iostream>

using namespace std;

int main(){
	int choice = 1;// This might be changed into a string
	int MFunc();
	EmployeeClass staff ;

	cout<<"Start program"<<endl;
	MFunc();
	cout<<"Choose an option"<<endl;

	do{
		cout<<"1. Employee options"<<endl;
		cout<<"2. Movie options"<<endl;
		cout<<"3. Room options"<<endl;
		cout<<"3. Tickets option"<<endl;
		cin>>choice;
	if(choice == 1){staff.print();}

	} while(choice == 1);

	cout<<"End program"<<endl;
}
