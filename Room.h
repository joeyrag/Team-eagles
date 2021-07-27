#pragma once
#include <iostream>
#include <string>

using namespace std;

class RoomClass{
	public:
	void print();
	void AddRoom();
	void RemoveRoom();
	void RoomList();
	RoomClass(){
		this->RoomNumber = "N/A";
		this->RoomCapacity = "N/A";
		this->is3D = "N/A";
	}
	~RoomClass(){}
	string getRoomNumber(){return this->RoomNumber;}
	string getRoomCapacity(){return this->RoomCapacity;}
	string get3D(){return this->is3D;}
	
	void setRoomNumber(const string RoomNumber){this->RoomNumber = RoomNumber;}
	void setRoomCapacity(const string RoomCapacity){this->RoomCapacity = RoomCapacity;}
	void set3D(const string is3D){this->is3D = is3D;}
private:
	string RoomNumber;
	string RoomCapacity;
	string is3D;



};
