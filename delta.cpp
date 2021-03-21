#include <iostream>
#include <string>
#include "welcome.h"
#include "welcome.cpp"


using namespace std;

int main()
{
    

    Board br;
  
  


    Welcome *interface1 = &br;

    interface1->welcome();
    interface1->info();
    

    
    

}