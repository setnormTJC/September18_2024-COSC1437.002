#include <iostream>
#include <vector>

#include<iomanip>

#include"Person.h"

//#include"PerceptionDevice.h"


//using namespace std; 

using std::cin; 
using std::cout; 
using std::vector;
using std::string; 


using std::left; 
using std::setw;
//vector<int> nums = { 1, 2, 3, 4, 5 }; 



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
	//int aNumber = 32; //this variable holds a SINGLE value 
	
	Person person; 
	cout << "Enter the person's member variables (hasHair (a bool), weight (double), eyeColor (string), bodyCount:\n";
	cin >> person.hasHair >> person.weight >> person.eyeColor >> person.numberOfBodiesInBackyard; 


	vector<string> names =
	{
		"Alice",
		"Bob",
		"Carol",
		"Darth Vader"
	}; //a data type that can hold MULTIPLE values 
	
	//high fallutin'

	//cout << names[0] << "\n";
	
	//an example of creating a `Person` "object" 
	Person him = {true, 190.1, "Brown", 2}; //brace initializer syntax
	//you is an object that holds all of the member variables of a `Person` data type 
	
	cout << him.eyeColor << "\n";

	//cout << him.numberOfBodiesInBackyard << "\n";

	//vector<int> someNums = { 1, 2, "3" };
	vector<Person> listOfPeople = { him };

	//cout << std::boolalpha << listOfPeople[0].hasHair << "\n";

	Person me; 
	me.eyeColor = "Blue"; 
	me.hasHair = true; //hairists
	me.numberOfBodiesInBackyard = 5; //animals (pets) that I have buried
	me.weight = 163.5; 

	listOfPeople.push_back(me);

	listOfPeople.push_back({ true, 123.5, "Grey", 0 }); //creating a `Person` object inplace 

	cout << "Printing list of people ...\n";
	system("pause"); 

	listOfPeople.push_back(person); 


	printListOfPeople(listOfPeople);


	//string a = 123; 


	//the . symbol is called the "member access operator" 

	//new data type 
}
