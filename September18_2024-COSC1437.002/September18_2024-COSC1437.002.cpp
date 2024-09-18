
#include <iostream>
#include <vector>

using std::cout; 
using std::vector;
using std::string; 

//vector<int> nums = { 1, 2, 3, 4, 5 }; 

/*
The Person struct has three attributes: hasHair, weight, and eyeColor
*/
struct Person
{
	//"member variables" of a person struct(ure)
	bool hasHair; 
	double weight; //lbs or kgs (160 lbs)
	string eyeColor; 
};

struct RPGCharacter
{
	int strength; 
	string specializationClass; //mage, knight, etc
};


//struct Student : Person //inheritance (3 or 4 weeks from now)
//{
//
//};


int main()
{
	int aNumber = 32; //this variable holds a SINGLE value 
	
	vector<string> names =
	{
		"Alice",
		"Bob"
		"Carol",
		"Darth Vader"
	}; //a data type that can hold MULTIPLE values 
	

	//cout << names[0] << "\n";
	
	//an example of creating a `Person` "object" 
	Person him = {true, 190.1, "Broasdfsadfwn"}; //brace initializer syntax
	//you is an object that holds all of the member variables of a `Person` data type 
	
	vector<Person> listOfPeople = { him }; 

	cout << std::boolalpha << listOfPeople[0].hasHair << "\n";



	//the . symbol is called the "member access operator" 

	//new data type 
}
