#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "welcome.h"

using namespace std;

class Board: public Welcome {

    public:

    //Welcome statement user inputs personal data
    void welcome(){
        cout << "Welcome to the Delta terminal at JFK international Airport \n";
        cout << "Please use the following tool to help you get to your destination \n";
        cout << " \n";
        cout << "Hello please enter your first name: \n";
        cin >> firstName;
        cout << "Please enter your last name: \n";
        cin >> lastName;
        cout << "Please enter your destination: \n";
        cin >> destination;
        cout << "Please enter your seating preferences: (first-class, business, economy) \n";
        cin >> seating;
        cout << "Printing.... \n";
        cout << " " << endl;

    };

    //outputs information user entered into boarding pass
    void info(){
        cout << "------------------------------------------------------------------ \n";
        cout << "This is the Boarding Pass for " << firstName << " " << lastName << endl;
        cout << "Your flight number is " << endl;
        Board::flightnumber();
        cout << "------------------------------------------------------------------ \n";
        cout << "Departing from New York to " << destination << endl;
        cout << "Your seat number is " << endl;
        if(seating == "first-class"){
            Board::firstclass();
        }
        if(seating == "business"){
            Board::business();
        }
        if(seating == "economy"){
            Board::economy();
        }
        cout << " " << endl;
        cout << "Thank you for flying Delta! \n";
        
        

    };

    // generates a random boarding pass number
    void flightnumber(){
        int num, numrand;
        char yn;
        string name;
        srand(time(NULL)); //seed for real random numbers
        for(int i = 0; i < 1; i++){
            cout << (rand() % 9) << (rand() % 9) << (rand() % 9) << (rand() % 9) << (rand() % 9) 
            << (rand() % 9) << (rand() % 9) << (rand() % 9) << (rand() % 9) << endl;
        }

    };
    //seats 1 - 5
    void firstclass(){
        int num, numrand;
        char yn;
        string name;
        srand(time(NULL)); //seed for real random numbers
        for(int i = 0; i < 1; i++)
        {
            char seatLetter[4] = {'A','B','C','D'};

            char RandIndex = rand() % 4;

            cout << (rand() % 5) + 1 << seatLetter[RandIndex];
        }
    };
    //seats 5 - 10
    void business(){
        int num, numrand;
        char yn;
        string name;
        srand(time(NULL)); //seed for real random numbers
        for(int i = 0; i < 1; i++)
        {
            char seatLetter2[8] = {'A','B','C','D','E','F','G','H'};
            char RandIndex = rand() % 4;
            cout << (rand() % 10) + 5 << seatLetter2[RandIndex];
        }
    };
    //seats 10 - 36
    void economy(){
        int num, numrand;
        char yn;
        string name;
        srand(time(NULL)); //seed for real random numbers
        for(int i = 0; i < 1; i++)
        {
            char seatLetter2[8] = {'A','B','C','D','E','F','G','H'};
            char RandIndex = rand() % 4;
            cout << (rand() % 26) + 10 << seatLetter2[RandIndex];
        }
        
    };

    

};