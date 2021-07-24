//Sorry it's still messy I plan on splitting things up in different files later. That said it should still work.

#include<iostream>
#include<iomanip>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<sstream>
using namespace std;
class Concessions
{
  private:
  string itemname;
  int qty;
  float rate;
  public:
  void readitems()
  {

    cout << endl << "Enter the item:";
    cin >> itemname;
    if(!cin){
    cout << "Not a valid name!";
    cout << endl;
    readitems();
    }
    cout << endl << "Enter the Price:";
    cin>>rate;
    if(!cin){
    cout << "Not a valid Price" << endl;
    
    }
    cout << endl << "Enter the qty:";
    cin >> qty;
    if(!cin){
    cout << "Not a valid qty";
    }



    ofstream R("Items.txt", ios::app);
    R << itemname << " " <<  rate << " " << qty << " " << endl;

    ifstream inputFile("Items.txt");
    string line;
    while(getline(inputFile, line)){
    stringstream ss(line);
    ss >> itemname >> rate;

    }
//    inputFile.close();

  }
  void printitems(){
    //stringstream ss;
     
    cout << setw(15) << itemname;
    cout<<setw(10) << qty;
 	cout<<setw(5)<<rate << "$";
 	cout<<setw(8)<<rate*qty<<endl;

	}
  
};
int mainF(){
	cout << "CONCESSION STAND" << endl;
	cout << "1. Add item" << endl;
	cout << "2. View items" << endl;
	
	int choice;
	cin >> choice;	
int n;
int j = 0;
if(choice == 1){
cout<<endl<<"Enter the number of items:";
cin>>n;
if(cin.fail()){
cout << "Not a valid input!";
return 0;
}
Concessions items[n];
ifstream MyFile;
	MyFile.open("Item.txt");
string line;

for(int i=0;i<n;i++)
{
	items[i].readitems();

}
cout<<setw(30) << "Concession Items"<< endl;
cout<<setw(15) << "Item Name" << setw(10) << "Quantity" << setw(5) <<
" Price"<<setw(8)<<endl;

for(int i=0;i<n;i++)
{

items[i].printitems();


}

}



if(choice == 2){
	ifstream MyFile;
	MyFile.open("Item.txt");
	string line;
	while(getline(MyFile, line)){

cout << line;
}

}

mainF;
//return 0;

}
