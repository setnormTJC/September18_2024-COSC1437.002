#include "Activity.h"
//this is the IMPLEMENTATION file (it contains FUNCTION DEFINITIONS! Hooray!) 

#include <iostream>

using std::cout; 

Activity::Activity()
{
	Activity::duration = 0; 
	Activity::isFun = true; 
}

void Activity::printActivityDeets()
{
	cout << "duration: " << duration << "\nisFun? " << std::boolalpha << isFun << "\n";
}
