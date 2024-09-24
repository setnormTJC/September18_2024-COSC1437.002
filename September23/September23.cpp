//
// main.cpp
// grape
//
// Created by Luna Maseda on 2024/09/23.
//


#include <iostream>
#include <iomanip>
using namespace std;


struct Fruit {
	string color;
	int carbContent;
	int proteinContent;
	int fatContent; // all in grams
}; 

Fruit makeFruit()
{
	Fruit grape;
	grape.color = "purple"; 

}


void printTheGrape(const Fruit& grape) {

	cout << "Grape is " << grape.color << ", contains " << grape.carbContent << "g carb, " << grape.proteinContent << "g protein, and " << grape.fatContent << "g fat. " << endl;
};

Fruit grape;


int a = 23;

//main function
int main() {

	cout << a << "\n";
	grape.color = "purple";
	grape.carbContent = 1;
	grape.proteinContent = 0;
	grape.fatContent = 0;

	//grape.color
	printTheGrape(grape);



}