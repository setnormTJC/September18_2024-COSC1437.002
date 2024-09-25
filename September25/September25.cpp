

#include <iostream>

int addTwo(); //C-language thing (a function prototype) -> used in assembly 

class Hotel
{
//private (member vars):
	double m_costPerNight = 99.99; //m as in "member" 

	int numberOfStars; //MUST be between 0 and 5

public: //this is an "access specifier/modifier" 

	//"member functions" -> they are members of the `Hotel` class
	void setNumberOfStars(int clientSpecifiedStarCount)
	{
		while (clientSpecifiedStarCount < 0
			||
			clientSpecifiedStarCount > 5)
		{
			std::cout << "\nCannot have greater than 5 or less than 0 stars ...\n";
			std::cin >> clientSpecifiedStarCount;
		}

			//validity check on the member variable supplied
		std::cout << "Updated the number of stars to: " << clientSpecifiedStarCount; 
		numberOfStars = clientSpecifiedStarCount; 
	}

	//getter (accessor) function 
	double getCostPerNight() const
	{
		/*newCost = 123.01;*/ 
		//m_costPerNight = 123.00; 
		//m_costPerNight = newCost; 
		return m_costPerNight; //round to two digits (nearest cent?)asc
	}
	//mutable 

	void printAllMemberVars()
	{
		std::cout << "\nCost per night is $" << m_costPerNight 
			<< "\nNumber of stars: " << numberOfStars << "\n";
	}

	void doSomething(); //function declaration
};

/*main function could be called a "client" of the `Hotel` class 
* (it is also called a "driver program" 
*/
int main()
{
	//const int BAKERS_DOZEN = 13; 
	//const std::string THE_LAW = "DON'T do that!\n"
	//const double PI = 3.14; 
	//PI = 123.123; 

	//GiB (Gebibyte) -> 2^30 Bytes 
	//std::cout << "Size of (amount of RAM/memory allocated to) integer " << sizeof(int) << " Bytes\n ";
	//std::cout << "Size of a `Hotel` object: " << sizeof(Hotel) << "\n";

	//double costPerNight; 

	//int iANumber = 32; //another example of "Hungarian notation" 


	Hotel americana; 
	americana.setNumberOfStars(3); 
	americana.printAllMemberVars(); 

	//americana.
}

void Hotel::doSomething()
{
	std::cout << "Doing something in the Hotel class...\n";
}