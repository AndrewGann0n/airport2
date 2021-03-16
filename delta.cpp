#include <iostream>
#include <string>
#include "welcome.h"
#include "welcome.cpp"
#include "status.h"
#include "status.cpp"

using namespace std;

int main()
{
    

    Board br;
  
  


    Welcome *interface1 = &br;
    Status *interface2 = &wr;

    interface1->welcome();
    interface1->info();
    

    
    

}