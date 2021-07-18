#include "Movie.h"
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Movie::printMenu(){
	int choice = 1;
	bool stop;
	do{
	cout<<"________________________________________"<<endl;
	cout<<"Please select an option"<<endl;
	cout<<"1.Add movie."<<endl;//complete
	cout<<"2.Remove movie."<<endl;//complete
	cout<<"3.Edit a movie."<<endl;
	cout<<"4.Display movie list"<<endl;//complete
	cout<<"Press anything to exit."<<endl;
	cout<<"________________________________________"<<endl;	
	cin>>choice;
	if(choice == 1){addMovie();}
	else if (choice == 2){removeMovie();}
	else if (choice == 3){editMovie();}
	else if (choice == 4){printMovieList();}
    }
	else return;
	} while(choice == 1 ||choice == 2 ||choice == 3 ||choice == 4);



}

void Movie::addMovie()
{
    ifstream inFile("Movie.txt"); //open movies text file to read
    
    vector<Movie> movie;
    
    string mTitle;
    string mTime;
    string mRating;
    string mGenre;
    float mDuration;
    
    string fLine;
    int count=0;
    
    while(getline(inFile,fLine)) //scan movies txt file
    {

        movie.push_back(Movie());

        stringstream ss(fLine);
        
        

        //start reading the file line by line
        getline(ss,mTitle, ','); 
        movie[count].setMovTitle(mTitle);

        getline(ss,mTime, ',');
        movie[count].setMovTime(mTime);

        getline(ss,mRating, ',');
        movie[count].setMovRating(mRating);
        
        getline(ss,mDuration, ',');
        movie[count].setMovDuration(mDuration));

        count++;    //increment count
    }
    cout<<"Enter Movie Title: "<<endl;
    cin>>mTitle;
    cout<<"Enter Movie Timing: "<<endl;
    cin>>mTime;
    cout<<"Enter the Movie's Rating: "<<endl;
    cin>>mRating;
    cout<<"Enter the Duration of the Movie: "<<endl;
    cin>>mDuration;


    movie.push_back(Movie());
    
    //use user input to set movie info in array
    movie[movie.size()-1].setMovTitle(mTitle);
    movie[movie.size()-1].setMovTime(mTime);
    movie[movie.size()-1].setMovRating(mRating);
    movie[movie.size()-1].setMovGenre(mGenre);
    movie[movie.size()-1].setMovDuration(mDuration);

    inFile.close();
    
    ofstream outFile("Movie.txt");  //open output file to write into
    for(int i = 0; i != movie.size(); i++)
    {
        outFile << movie[i].mTitle << "," << movie[i].mTime << "," << movie[i].mRating << "," << movie[i].mGenre << movie[i].mDuration << endl;
    }

    outFile.close();
    
    movie.clear();  //clear movie vector
    
    return;
}

//
void Movie::removeMovie()
{
    ifstream myfile("Employee.txt"); //open movies text file
    
    vector<Movie> movie;
    
    string fLine;
    int count = 0;
    
    string title;
    string mtime;
    string rating;
    string genre;
    float duration;
    bool mFound = 0;
    int deleteMovie;

    cout<<"Enter the Title of the Movie to be Removed: " << endl;
    cin>>title;
    cout<<"Enter the Movie's Show Time:"<<endl;
    cin>>mtime;

    while(getline(inFile,fLine))    //loop through input file
    {

        movie.push_back(Movie());

        stringstream ss(fLine);

        getline(ss,title, ','); 
        movie[count].setMovTitle(title);

        getline(ss,mtime, ',');
        movie[count].setMovTime(mtime);

        getline(ss,rating, ',');
        movie[count].setMovRating(rating);
        
        getline(ss,genre, ',');
        movie[count].setMovGenre(genre));
        
        getline(ss,duration, ',');
        movie[count].setMovDuration(duration));

        count++;    //increment count
    }


    for(int i = 0; i < movie.size(); i++)
    {
        string tempLoop1;
        string tempLoop2;

        tempLoop1 = movie[i].movTitle;
        tempLoop2 = movie[i].movTime;

        if(tempLoop1 == firstMov && tempLoop2 == lastMov)
        {
            //if movie found, keep track of its location
            deleteMovie = i;
            mFound = true;
            cout << "The selected movie has been deleted." << endl;
        }
    }
    
    movie.erase(movie.begin() + deleteMovie);   //deletes movie from vector
    inFile.close();

    if(mFound == true)
    {
        ofstream myfile("Movie.txt");
        for(int i=0; i<movie.size(); i++)
        {
            inFile<<movie[i].movTitle<<","<<movie[i].movTime<<","<<movie[i].movRating<<movie[i].movGenre<<movie[i].movDuration<<endl;
        }
    }
    else if (mFound == false)
        cout<<"Movie not Found in Movie Database"<<endl;

    movie.clear();
    
    return;
}

//edit an existing movie
void Movie::editMovie(){
	ifstream myfile("Movie.txt"); //Opeining the file
	vector<Movie> movie;	
	string line;
	int count=0;	
	string title;
	string time;
	string genre;
	string rating;
	float duration;
	int choice;
	bool isfound = 0;
	
	cout<<"Enter Title of Movie to be Edited"<<endl;
	cin>>title;
	cout<<"Enter Time:"<<endl;
	cin>>time;
	
	//loop through .txt file
	while(getline(myfile,line)){
		
	staff.push_back(Movie());//Add an element to the vector
	
	stringstream ss(line);
	
    //start reading from file
	getline(ss,title, ','); 
	movie[count].setMovTitle(title);
	
	getline(ss,time, ',');
    movie[count].setMovTime(time);
	
	getline(ss,rating, ',');
	movie[count].setMovRating(rating);
	
	getline(ss,genre, ',');
	movie[count].setMovGenre(genre);
    
    getline(ss,duration, ',');
	movie[count].setMovDuration(duration)
	
	count++;//counts the loop iteration
	}
	for(int i=0; i<staff.size(); i++){
		//Turns the vector into a temp variable for the loops.
		string tempfirst;
		string templast;
		
		tempfirst = movie[i].movTitle;
		templast = movie[i].movTime;

		if(tempfirst == title && templast == time){
			//If valid movie found, remember the element location
			cout<<"Movie found"<<endl;
			cout<<"Select what you want to edit"<<endl;
			cout<<"1.Time"<<endl;
			cout<<"2.Rating"<<endl;
			cout<<"3.Genre"<<endl;
            cout<<"4.Duration"<<endl;
			cin>>choice;
			if(choice == 1){
				cout<<"Enter new time"<<endl;
				cin>>time;
				movie[i].movTime = time;

			}
			else if (choice == 2){
				cout<<"Enter new rating"<<endl;
				cin>>rating;
				movie[i].movRating = rating;
				
			}
            else if(choice == 3){
                cout<<"Enter new genre"<<endl;
                cin>>genre;
                movie[i].movGenre = genre;
            }
            else if(choice == 4){
                cout<<"Enter new duration"<<endl;
                cin>>duration;
                movie[i].movDuration = duration;
            }
			else{
				cout<<"Movie not found";
				return;
				}		
		}
	}
	
		ofstream myfile("Movie.txt");
		for(int i=0; i<movie.size(); i++){
			myfile<<movie[i].movTitle<<","<<movie[i].moveTime<<","<<movie[i].movRating<<","<<movie[i].movGenre<<","<<movie[i].movDuration<<endl;
		}
		
		myfile.close();
		movie.clear();	
		return;
}

//display existing movies
void Movie::displayMovieList(){
	ifstream myfile("Movie.txt");
    
    string line;
    string title;
	string time;
	string genre;
	string rating;
	float duration;
	
	while(getline(myfile,line)){//Reads the text document
		stringstream ss(line);
		getline(ss,title, ',');
		getline(ss,time, ',');
		getline(ss,rating, ',');
		getline(ss,genre, ',');
        getline(ss, duration, ',');
		cout<<title<<" "<<time<< " "<<rating< " "<<genre<<" "<<duration<<endl;
	}
	myfile.close();
	return;
}
