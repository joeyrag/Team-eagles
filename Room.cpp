#include<vector>
#include<fstream>
#include<sstream>
#include "Room.h"


void RoomClass::print(){
	int choice = 1;
	do{
	cout<<"________________________________________"<<endl;	
	cout<<"Please select an option"<<endl;
	cout<<"1.Add Room"<<endl;
	cout<<"2.Remove a room"<<endl;
	cout<<"3.Display room list"<<endl;
	cout<<"Type anything else to exit."<<endl;
	cout<<"________________________________________"<<endl;	
	cin>>choice;
	}while(choice == 1||choice ==2||choice == 3);
}

void RoomClass::AddRoom(){
	ifstream myfile("Room.txt");
	vector<RoomClass> room;
	string line;
	int count = 0;
	
	string maxsize;
	string roomnumber;
	string room3d = "N/A";
	
	while(getline(myfile,line)){
		room.push_back(RoomClass());
		stringstream ss(line);
		
		getline(ss,roomnumber,',');
		room[count].setRoomNumber(roomnumber);
		getline(ss,maxsize,',');
		room[count].setRoomCapacity(maxsize);
		getline(ss,room3d,',');
		room[count].set3D(room3d);

		count++;
	}
	cout<<"Enter the room number/ID"<<endl;
	cin>>roomnumber;
	cout<<"Enter the room capacity"<<endl;
	cin>>maxsize;
	cout<<"Is the room 3D capatible?"<<endl;
	
	do{
	cout<<"1.Yes."<<endl;
	cout<<"2.No."<<endl;
	cin>>room3d;
	}while (room3d != "1" || room3d !="2");
	room.push_back(RoomClass());
	
	room[room.size()-1].setRoomNumber(roomnumber);
	room[room.size()-1].setRoomCapacity(maxsize);
	room[room.size()-1].set3D(room3d);
	
	ofstream myfile1("Room.txt");
	for (int i=0; i!=room.size(); i++){
		myfile1<<room[i].RoomNumber<<","<<room[i].RoomCapacity<<","<<room[i].is3D<<endl;
		
	}
	myfile1.close();
	room.clear();
	return;
}
