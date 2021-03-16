#ifndef WELCOME_H
#define WELCOME_H
#include <string>
#include <cstdlib>


class Welcome {

    public:

    char firstName[20];
    char lastName[20];
    char destination[20];
    char seatLetter[4];
    char seatLetter2[8];
    std::string seating;
    void flightnumber();
    void firstclass();
    void business();
    void economy();
    

    virtual void welcome(){};
    virtual void info(){};

    private:
       


};


#endif // WELCOME_H