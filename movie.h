#ifndef Movie.h
#define Movie.h
#include <iostream>
#include <cstdlib>
using namespace std;

class Movie{
	public:
	string movTitle;
	string movTime;
	string movRating;
	string movGenre;
	float movDuration;
//member functions
    Movie() //constructor
    {
        this->movTitle = "N/A";
        this->movTime = "N/A";
        this->movRating = "N/A";
        this->movGenre = "N/A";
        this->movDuration = "0.0";  //error: convert to float?
        //this->movSynopsis = "N/A"; //from TA comments on graded Sprint
    }
    void printMenu();
    void addMovie();
    void removeMovie();
void editMovie();
void displayMovieList();
    
    ~Movie();   //destructor

    string getMovieTitle()
    {
        return this->movTitle;
    }
    string getTime()
    {
        return this->movTime;
    }
    string getRating()
    {
        return this->movRating;
    }
    string getGenre()
    {
        return this->movGenre;
    }
    float getDuration()
    {
        return this->movDuration;
    }
    /*string getSynopsis()
    {
        return this->movSynopsis;
    }*/

	void setMovTitle(string movTitle)
	{
	    this->movTitle = movTitle;
	}
    void setMovTime(string movTime)
    {
        this->movTime = movTime;
    }
    void setMovRating(string movRating)
    {
        this->movRating = movRating;
    }
    void setMovGenre(string movGenre)
    {
        this->movGenre = movGenre;
    }
    void setMovDuration(float movDuration)
    {
        this->movDuration = movDuration;
    }
    /*void setMovSynopsis(string movSynopsis)
    {
        this->movSynopsis = movSynopsis;
    }*/
};

#endif // MOVIE_H
