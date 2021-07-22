#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>

using namespace std;

	void Login();
	void Registr();
	void Reset();

	int MFunc(){//Console Output
	int option;
	cin.clear();
	cout << "1. To login\n";
	cout << "2. To register\n";
	cout << "3. To reset password\n";
	cout << "4. Exit\n";

	cout << ": ";
	cin >> option;
	cout << endl;

	switch(option){
		case 1:
			Login(); 
			break;
		case 2: 
			Registr();
			break;
		case 3:
			Reset();
			break;
		case 4:
			cout << "Exit\n\n";
			break;
		default:
			cout << "Not an option, please try again\n";
			MFunc();
	
	
	}
	return 0;
	}

	void Login(){
		//Variables for stored and input info
		string Username;
		string Password;
		string storeUser;
		string storePassword;
		int count;
		int MoE;
		cout << "LOGIN \n" << endl;
		cout << "Manager(1) or Employee(2)? : "; //Unsure about this
		cin >> MoE; //Unsure about this as well

		cout << "Enter Username: ";
		cin >> Username;
		cout << endl;
		cout << "Enter Password: ";
		cin >> Password;
		cout << endl;

		ifstream input("database.txt"); //Create a text file called database.txt
		while(input >> storeUser >> storePassword){ //Check if login input is within the database
			if(storeUser == Username && storePassword == Password){
			count = 1;
			
			
			}

		
		
		}

		input.close(); //close text file
		if(count == 1){
		cout << "\n Logging in as " << Username << endl; //Success
		cin.get();
		//cin.get();
		return;
		
		
		}

		else{
		cout << "Password or Username is incorrect\n "; //Login failed
		MFunc();
		
		
		
		}

	return;
	}


	void Registr(){
		string searchUser; //variables for input info and existing info
        string UserN;

		string Username;
		string Password;
		string storeUser;
		string storePassword;
		cout << "Enter Username: "; 
		cin >> Username;
		cout << endl;
		cout << "Enter Password: ";
		cin >> Password; 
		cout << endl;
		
		 ifstream searchU("database.txt"); //Open or create textfile
        while(searchU >> UserN){ //Check if username already exists
        if(Username == UserN){
        cout << "ERROR: This username is already in use!" << endl; 
	Registr(); 
        }


        }
	searchU.close();

		//Username Duplicate check here


		ofstream R("database.txt", ios::app);
		R << Username << " " << Password << endl;
		cout << "Registration complete" << endl;
		MFunc();
	
	
	}

	void Reset(){ 
	int count = 0;
	
	cout << "FORGOTTEN PASSWORD\n\n" << endl;
        cout << "Enter Username: ";
	string searchUser;
        string UserN;
	string PassN;
	cin >> searchUser;

	ifstream searchU("database.txt"); //Check text file for account info
	while(searchU >> UserN >> PassN){
	if(UserN == searchUser){
	count = 1;
	
	}
	
	
	}

	searchU.close(); //close textfile
	if(count == 1){
	cout << "Username found" << endl; 
	cout << "Password for " << UserN << " is " << PassN << endl;
        cin.get();
	cin.get();
	system("cls");
	MFunc();	
	
	}

	else{
	cout << "ID was not found within the database " << endl;
	cin.get();
	MFunc();
	
	}
//	break;
	
	
	
	
	}
