  
#ifndef ticketvendor.h
#define ticketvendor.h
#include <iostream>
#include <cstdlib>
#include<windows.h>
#include <limits>
using namespace std;

class TicketVendor
{
public:
    int total_sales = 0;
    int seat_number, price = 0;
    int row_seat, column_seat;
    char seat_action;
    char category, menu;
    char row_convert;
    char choice;
    bool IsContinue = true; // use for the exit in menu
    char answer;
    string choose_seat;
    const int row = 16;
    const int column = 20;
    char cinema[row][column];
    int total_seat = 320;
    HANDLE hConsole;

    void Menu1();
    void validateMenu1();
    void seatAssigment();
    void Premier(int seat_number);
    void Gold(int seat_number);
    void Economy(int seat_number);
    void seating_plan();
    int payment_reserved_seat();
    bool availableSeat(int seat_number, char category);
    bool checkRangeSeat(char category,char row, int column);
    bool verify_seat_status(int row,int column, int seat_number);
    void reset_seating_plan();
    int update_sales(int seat_number);
    void update_seatingplan(int seat_number);
    bool isNum(char input);
    bool isAlpha(char input);

    TicketVendor()//constructor
    {

        for(int i = 0 ; i < 16; i++) // set the symbol as *
        {
            for(int j = 0; j < 20; j++)
            {
                cinema [i][j] = '*';
            }
        }
        while(IsContinue)
        {
            system("cls");//clear screen
            seating_plan();
            Menu1();// the function which display the Main Menu interface

            validateMenu1();//the function to validate the Menu1 user input

            cout<<endl;
            cout<<" "<< "Do you want to repeat the program?\n";        //option for user to repeat program or end program
            cout<<" "<< "Type any key & press enter continue or\n";
            cout<<" "<< "Type (q) & press enter to quit the program\n";
            cout<<" "<< "Option : ";
            cin >> answer;
            cout<<endl;

            if ((answer == 'Q') || (answer == 'q'))
            {
                while ( !IsContinue );
                cout<<endl;
                cout << "Thanks! Enjoy the Movie!" << endl; // quit message
                system("pause");
                return 0;
            }
        }
    }
    ~TicketVendor(); //destructor

};


#endif // TICKETVENDOR_H_INCLUDED
