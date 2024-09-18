#include <iostream>
#include <vector>

#include<iomanip>

using std::cout; 
using std::vector;
using std::string; 


using std::left; 
using std::setw;
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

	int numberOfBodiesInBackyard;
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

void printListOfPeople(const vector<Person>& people)
{

	const int COL_WIDTH = 10; 

	cout << left << setw(10) << "Has Hair: "; 
	cout << left << setw(10) << "Weight:";
	cout << left << setw(10) << "Eye color:"; 
	cout << left << setw(10) << "Num bodies: ";
	cout << "\n";
		
	for (const auto& person : people)
	{
		cout << std::boolalpha;
		cout << left << setw(10) << person.hasHair;
		cout << left << setw(10) << person.weight;
		cout << left << setw(10) << person.eyeColor;
		cout << left << setw(10) << person.numberOfBodiesInBackyard;

		cout << "\n";
	}
}

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
	Person him = {true, 190.1, "Brown", 2}; //brace initializer syntax
	//you is an object that holds all of the member variables of a `Person` data type 
	
	//cout << him.numberOfBodiesInBackyard << "\n";


	vector<Person> listOfPeople = { him };

	//cout << std::boolalpha << listOfPeople[0].hasHair << "\n";

	Person me; 
	me.eyeColor = "Blue"; 
	me.hasHair = true; //hairists
	me.numberOfBodiesInBackyard = 5; 
	me.weight = 163.5; 

	listOfPeople.push_back(me);

	listOfPeople.push_back({ true, 123.5, "Grey", 0 }); //creating a `Person` object inplace 

	cout << "Printing list of people ...\n";
	system("pause"); 

	printListOfPeople(listOfPeople);


	//string a = 123; 


	//the . symbol is called the "member access operator" 

	//new data type 
}
