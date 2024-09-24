#pragma once //we'll talk about this later ...(pragmatic) 

#include"iostream" 
#include <vector>

#include<iomanip>

using std::cout;
using std::vector;
using std::string;


using std::left;
using std::setw;

/*
The Person struct has three attributes: hasHair, weight, and eyeColor
*/
struct Person
{
	//"member variables" of a person struct(ure)
	bool hasHair;
	double weight; //lbs or kgs (160 lbs)
	string eyeColor;

	int numberOfBodiesInBackyard; //levity
};


void printListOfPeople(const vector<Person>& people)
{

	const int COL_WIDTH = 10;

	cout << left << setw(10) << "Has Hair: ";
	cout << left << setw(10) << "Weight:";
	cout << left << setw(10) << "Eye color:";
	cout << left << setw(10) << "Num bodies: ";
	cout << "\n";

	//std::chrono
		//for (int i = 0; i < people.size(); i++)
	for (const auto& person : people) //"range-based" for loop
	{
		cout << std::boolalpha;
		cout << left << setw(10) << person.hasHair;
		cout << left << setw(10) << person.weight;
		cout << left << setw(10) << person.eyeColor;
		cout << left << setw(10) << person.numberOfBodiesInBackyard;

		cout << "\n";
	}
}

