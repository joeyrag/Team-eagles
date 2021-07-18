#include <vector>
#include <fstream>
#include <sstream>
#include "employee.h"


void EmployeeClass::print(){
	int choice = 1;
	bool stop;
	do{
	cout<<"________________________________________"<<endl;
	cout<<"Please select an option"<<endl;
	cout<<"1.Add an employee."<<endl;//complete
	cout<<"2.Remove an employee."<<endl;//complete
	cout<<"3.Edit an employee."<<endl;
	cout<<"4.Display employee list"<<endl;//complete
	cout<<"5.Display information for specific employee"<<endl;//complete
	cout<<"Type anything else to exit."<<endl;
	cout<<"________________________________________"<<endl;	
	cin>>choice;
	if(choice == 1){AddEmployee();}
	else if (choice == 2){RemoveEmployee();}
	else if (choice == 3){EditEmployee();}
	else if (choice == 4){PrintEmployee();}
	else if (choice == 5){PrintSpecificEmployee();}
	else return;
	} while(choice == 1 ||choice == 2 ||choice == 3 ||choice == 4 ||choice == 5 );



}

void EmployeeClass::AddEmployee(){
	ifstream myfile("Employee.txt"); //Opeining the file
	vector<EmployeeClass> staff;	//Variable setup
	string line;
	int count=0;
	
	string firstname;
	string lastname;
	string salary;
	string job;	

	//LOOPS "Employee.txt" FILE HERE
	while(getline(myfile,line)){
		
	staff.push_back(EmployeeClass());//Adds an element to the vector
	
	stringstream ss(line);
	
	getline(ss,firstname, ','); //Reads the line from file
	staff[count].setFirstName(firstname);//Copys the file name into the vector
	
	getline(ss,lastname, ',');
	staff[count].setLastName(lastname);
	
	getline(ss,salary, ',');
	staff[count].setSalary(salary);
	
	getline(ss,job, ',');
	staff[count].setJob(job);
	
	count++;//counts the loop iteration
	}
	cout<<"Enter the First Name of the Employee"<<endl;
	cin>>firstname;
	cout<<"Enter the Last Name of the Employee"<<endl;
	cin>>lastname;
	cout<<"Enter the Salary of the Employee"<<endl;
	cin>>salary;
	cout<<"Enter the Job of the Employee"<<endl;
	cin>>job;
	
	
	staff.push_back(EmployeeClass());
	//Adds the user defined variables to the array
	staff[staff.size()-1].setFirstName(firstname);
	staff[staff.size()-1].setLastName(lastname);
	staff[staff.size()-1].setSalary(salary);
	staff[staff.size()-1].setJob(job);

	myfile.close();

	ofstream myfile1("Employee.txt");
	for(int i=0; i!=staff.size(); i++){//Copies the array to the staff database
		myfile1<<staff[i].FirstName<<","<<staff[i].LastName<<","<<staff[i].Salary<<","<<staff[i].Job<<endl;
		}
	//myfile1<<userFirst<<","<<userLast<<","<<userSalary<<","<<userJob<<endl;//Adds the user defined information to the employees list

	myfile1.close();
	staff.clear();	
	return;
}
//***************************************************************************
void EmployeeClass::RemoveEmployee(){
	ifstream myfile("Employee.txt"); //Opeining the file
	vector<EmployeeClass> staff;	//Variable setup
	string line;
	int count=0;	
	string firstname;
	string lastname;
	string salary;
	string job;	
	string userFirst;
	string userLast;
	bool isfound = 0;
	int deletestaff;
	
	cout<<"Enter the First Name of the Employee"<<endl;
	cin>>userFirst;
	cout<<"Enter the Last Name of the Employee"<<endl;
	cin>>userLast;
	
	//LOOPS "Employee.txt" FILE HERE
	while(getline(myfile,line)){
		
	staff.push_back(EmployeeClass());//Adds an element to the vector
	
	stringstream ss(line);
	
	getline(ss,firstname, ','); //Reads the line from file
	staff[count].setFirstName(firstname);//Copys the file name into the vector
	
	getline(ss,lastname, ',');
	staff[count].setLastName(lastname);
	
	getline(ss,salary, ',');
	staff[count].setSalary(salary);
	
	getline(ss,job, ',');
	staff[count].setJob(job);
	
	count++;//counts the loop iteration
	}
	

	for(int i=0; i<staff.size(); i++){
		//Turns the vector into a temp variable for the loops.
		string tempfirst;
		string templast;
		
		tempfirst = staff[i].FirstName;
		templast = staff[i].LastName;

		if(tempfirst == userFirst && templast == userLast){
			//If there is a valid user found, remember the element location
			deletestaff = i;
			isfound = true;
			cout<<"Employee found and removed"<<endl;
			
		}
		
	}
	staff.erase(staff.begin()+deletestaff);//Deletes the selected staff member from the vector
	myfile.close();

	if(isfound ==true){//If there is a valid staff member, copies and pastes the new vector in the file
		ofstream myfile("Employee.txt");
			for(int i=0; i<staff.size(); i++){
				myfile<<staff[i].FirstName<<","<<staff[i].LastName<<","<<staff[i].Salary<<","<<staff[i].Job<<endl;
				
			}
		
	}
	else if (isfound == false)
		cout<<"Employee not found"<<endl;
	
	
	staff.clear();
	return;
	
}
//***************************************************************************
void EmployeeClass::EditEmployee(){
	ifstream myfile("Employee.txt"); //Opeining the file
	vector<EmployeeClass> staff;	//Variable setup
	string line;
	int count=0;	
	string firstname;
	string lastname;
	string salary;
	string job;	
	string userFirst;
	string userLast;
	int choice;
	bool isfound = 0;
	
	cout<<"Enter the First Name of the Employee"<<endl;
	cin>>userFirst;
	cout<<"Enter the Last Name of the Employee"<<endl;
	cin>>userLast;
	
	//LOOPS "Employee.txt" FILE HERE
	while(getline(myfile,line)){
		
	staff.push_back(EmployeeClass());//Adds an element to the vector
	
	stringstream ss(line);
	
	getline(ss,firstname, ','); //Reads the line from file
	staff[count].setFirstName(firstname);//Copys the file name into the vector
	
	getline(ss,lastname, ',');
	staff[count].setLastName(lastname);
	
	getline(ss,salary, ',');
	staff[count].setSalary(salary);
	
	getline(ss,job, ',');
	staff[count].setJob(job);
	
	count++;//counts the loop iteration
	}
	for(int i=0; i<staff.size(); i++){
		//Turns the vector into a temp variable for the loops.
		string tempfirst;
		string templast;
		
		tempfirst = staff[i].FirstName;
		templast = staff[i].LastName;

		if(tempfirst == userFirst && templast == userLast){
			//If there is a valid user found, remember the element location

			cout<<"Employee found"<<endl;
			cout<<"What would you like to edit?"<<endl;
			cout<<"1.Salary"<<endl;
			cout<<"2.Job"<<endl;
			cout<<"3.Exit"<<endl;
			cin>>choice;
			if(choice == 1){
				cout<<"Enter salary"<<endl;
				cin>>salary;
				staff[i].Salary = salary;

			}
			else if (choice == 2){
				cout<<"Enter new job"<<endl;
				cin>>job;
				staff[i].Job = job;
				
			}
			else{
				cout<<"Employee not found";
				return;
				}
			
		}

		
	}
	
		ofstream myfile1("Employee.txt");
		for(int i=0; i<staff.size(); i++){
			myfile1<<staff[i].FirstName<<","<<staff[i].LastName<<","<<staff[i].Salary<<","<<staff[i].Job<<endl;
		}
		
		myfile.close();
		staff.clear();	
		return;
}

//***************************************************************************
void EmployeeClass::PrintEmployee(){
	ifstream myfile("Employee.txt");
	string line;
	string firstname;
	string lastname;
	string salary;
	string job;
	
	while(getline(myfile,line)){//Reads the text document
		stringstream ss(line);
		getline(ss,firstname, ',');
		getline(ss,lastname, ',');
		getline(ss,salary, ',');
		getline(ss,job, ',');
		cout<<firstname<<" "<<lastname<< " "<<salary<< " "<<job<<endl; //outputs the list of employees and all information
	}
	cout<<"Test"<<endl;
	myfile.close();
	return;
}
//****************************************************************************
void EmployeeClass::PrintSpecificEmployee(){
	ifstream myfile("Employee.txt"); //Opeining the file
	vector<EmployeeClass> staff;	//Variable setup
	string line;
	int count=0;	
	string firstname;
	string lastname;
	string salary;
	string job;	
	string userFirst;
	string userLast;
	bool isfound = 0;
	
	cout<<"Enter the First Name of the Employee"<<endl;
	cin>>userFirst;
	cout<<"Enter the Last Name of the Employee"<<endl;
	cin>>userLast;
	
	//LOOPS "Employee.txt" FILE HERE
	while(getline(myfile,line)){
		
	staff.push_back(EmployeeClass());//Adds an element to the vector
	
	stringstream ss(line);
	
	getline(ss,firstname, ','); //Reads the line from file
	staff[count].setFirstName(firstname);//Copys the file name into the vector
	
	getline(ss,lastname, ',');
	staff[count].setLastName(lastname);
	
	getline(ss,salary, ',');
	staff[count].setSalary(salary);
	
	getline(ss,job, ',');
	staff[count].setJob(job);
	
	count++;//counts the loop iteration
	}
	

	for(int i=0; i<staff.size(); i++){
		//Turns the vector into a temp variable for the loops.
		string tempfirst;
		string templast;
		tempfirst = staff[i].FirstName;
		templast = staff[i].LastName;

		if(tempfirst == userFirst && templast == userLast){
			cout<<staff[i].FirstName<< " "<<staff[i].LastName<<" "<<staff[i].Salary<< " "<<staff[i].Job<<endl;
			isfound = true;
		}
		
	}
	if (isfound == false)
		cout<<"User not found"<<endl;
	
	myfile.close();
	staff.clear();
	return;
}
