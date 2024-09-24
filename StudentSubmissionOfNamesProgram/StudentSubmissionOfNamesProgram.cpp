//
// main.cpp
// morePracticeLuna
//

/*
#include <iostream>
#include <array>
#include <string>
using namespace std;

char spaces[1];
int num = 0;

int main(){
string fullNames[5] = {"John Doe Smith", "Kate Garry Hudson", "Tina Stamatina Fey", "Hugh Mungo Grant", "Uma Karuna Thurman"};


for (int i = 0; i < 5; i++){
string fullName = fullNames[i];
string firstName, middleName, lastName;

switch (num){
case 0: {

if (fullName[i] != ' '){
switch (num){
case 0:
for (int i = 0; i != ' '; i++){
fullname[i] = firstName;
num++;
}
case 1:



}
}
else
num++;

}



}

}


cout << "Your first name is ";





}*/

#include <iostream>
#include <string>
#include <array>
using namespace std;


int main() {

	string someCharacters = "01 345 abc";
	cout << "FIRST space position: " << someCharacters.find(' ') << "\n";

	cout << "Second space position: " << someCharacters.rfind(' ') << "\n";

	//cout << "Look here: " << someCharacters.substr(1000, 2) << "\n";

	string fullNames[5] =
	{ 
		"Luna None Maseda",
		"Kate Garry Hudson",
		"Tina Stamatina Fey",
		"Hugh Mungo Grant",
		"Uma Karuna Thurman" 
	};

	string fullName; //= "" empty string

	for (int i = 0; i < 5; i++)  
	{
		fullName = fullNames[i]; 
		int firstSpaceLocation = fullName.find(' ');
		string firstName = fullName.substr(0, firstSpaceLocation);
		cout << "First name is: " << firstName << " and that has a length of " << firstName.length() << "\n"; 
		
		int secondSpaceIndex = fullName.rfind(' ');

		//cout << "Middle name length is: " << secondSpaceIndex - firstSpaceLocation - 1 << "\n";
		int middleNameLength = secondSpaceIndex - firstSpaceLocation - 1; 
		string middleName = fullName.substr(firstSpaceLocation + 1, middleNameLength );
		cout << "Middle name is: " << middleName <<
		" and that has a length of: " << middleName.length() << "\n";
		
		//Good luck!
		//Buena suerte

		cout << "\n\n";
		//Luna -> eth -> Se -> eh 
		//cout << "Found a space in " << fullName << " at index = " << fullName.find(' ') << "\n";
	} //end of for loop

}
