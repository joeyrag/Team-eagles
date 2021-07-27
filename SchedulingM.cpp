#include<iostream>
#include<string>
#include<fstream>
#include<istream>
#include<stdlib.h>
//NOT FINISHED
using namespace std;
	class Schedule{
	
	public:
	void AddMovieSchedule();
	void RemoveMovieSchedule();

	
	
	
	
	
	
	
	
	};
	
	void Schedule::AddMovieSchedule(){
	//Temporary, will get info from the movie class here
	string movie;
	string time;
	cout << "Movie name: ";
	getline(cin, movie);
	cout << endl;
	cout << "Movie time: ";
	getline(cin, time);
	string storeMovie;
	string storeTime;
	ofstream input("ScheduleBase.txt", ios::app);
	input << movie << "  " << time << endl;
	cout << "MOVIE AND TIME ADDED" << endl;

	
	
	}

	void Schedule::RemoveMovieSchedule(){
	string movie;
	string time;
	string Smovie;
	string Stime;
	int count = 0;
	cout << "Enter movie to remove: ";
	getline(cin, movie);
	cout << endl;
	
	cout << "Enter time to remove: ";
	getline(cin, time);
	
	cout << endl;
	ifstream searchU("ScheduleBase.txt");
	while(searchU >> Smovie >> Stime){
	if((Smovie == movie) && (Stime == time)){
	count == 1;
	cout << "Found" << endl;
	
	
	}else{
	cout << "Not Found" << endl;
	
	}

	}

	searchU.close();
	if(count == 1){
	Smovie = " ";
	Stime = " ";
	cout << "Schedule removed";
	
	}
	
	}

	int main(){
	Schedule obj;
	int option;
	cout << "SCHEDULING" << endl;
	cout << "1. ADD Movie" << endl;
	cout << "2. REMOVE Movie" << endl;
	cin >> option;
	switch(option){
		case 1:
			obj.AddMovieSchedule();
			break;
		case 2: 
			obj.RemoveMovieSchedule();
			break;
		default:
			cout << "Fail" << endl;
	
	
	}
	return 0;
	}
