

#include <iostream>

using std::cout; 


int addTwo(); //C-language thing (a function prototype) -> used in assembly 



//class Class //advocate the use of PascalCase
//{
//	std::string courseNumber; 
//};

/*Hotel objects are made of two member vars: 1) cost per night 2) number of stars (int)*/
class Hotel
{
private: //(member vars):
	double m_costPerNight = 99.99; //m as in "member" (Hungarian notation)

	int numberOfStars; //MUST be between 0 and 5

public: //this is an "access specifier/modifier" 
	Hotel() //= delete; //more on this later 
	{
		m_costPerNight = -123.45; 
		numberOfStars = -3; 
	}

	Hotel(double clientSuppliedCostPerNight, int clientSuppliedNumberOfStars)
	{
		m_costPerNight = clientSuppliedCostPerNight;
		numberOfStars = clientSuppliedNumberOfStars;

	}


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

	void printHotelAttributes()
	{
		std::cout << "\nCost per night is $" << m_costPerNight 
			<< "\nNumber of stars: " << numberOfStars << "\n";
	}

	bool isSameHotel(const Hotel& otherHotel); //again, this is a function "declaration" 

	void doSomething(); //function declaration
};

int doSomething()
{
	return 1; 
}

int doSomething(int a)
{
	return 2; 
}



void doSomething_notClassBased(int a)
{
	cout << a << "adsfasdf\n";
}

//void foo()
//{
//
//}
//
//int baz()
//{
//
//}
//
//int bar()
//{
//	//FUBAR 
//}
/*main function could be called a "client" of the `Hotel` class 
* (it is also called a "driver program" 
*/
int main()
{
	//doSomething_notClassBased(5); 

	//const int BAKERS_DOZEN = 13; 
	//const std::string THE_LAW = "DON'T do that!\n"
	//const double PI = 3.14; 
	//PI = 123.123; 

	//GiB (Gebibyte) -> 2^30 Bytes 
	//std::cout << "Size of (amount of RAM/memory allocated to) integer " << sizeof(int) << " Bytes\n ";
	//std::cout << "Size of a `Hotel` object: " << sizeof(Hotel) << "\n";

	//double costPerNight; 

	//int iANumber = 32; //another example of "Hungarian notation" 
	//doSomething()

	Hotel americana{}; //this calls the "default" constructor of the `Hotel` class
	//default constructors take ZERO args (inputs)
	cout << "First hotel's attributes:\n";
	americana.printHotelAttributes(); 
	//americana.setNumberOfStars(3); 
	//americana.printHotelAttributes(); 

	
	Hotel someOtherHotel{ 99.99, 4 };
	cout << "SECOND hotel's attributes:\n";
	someOtherHotel.printHotelAttributes(); 

	Hotel copyOfAmericana = americana; 
	copyOfAmericana.printHotelAttributes(); 

	Hotel copyOfSomeOtherHotel{ someOtherHotel };
	copyOfSomeOtherHotel.printHotelAttributes(); 

	//if (someOtherHotel == copyOfAmericana)


	cout << std::boolalpha << americana.isSameHotel(someOtherHotel) << "\n";
	//americana.
}

void Hotel::doSomething()
{
	std::cout << "Doing something in the Hotel class...\n";
}

bool Hotel::isSameHotel(const Hotel& otherHotel)
{
	return (this->m_costPerNight == otherHotel.m_costPerNight
		&&
		this->numberOfStars == otherHotel.numberOfStars);
}