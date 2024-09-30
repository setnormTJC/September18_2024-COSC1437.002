//
//  main.cpp
//  tictactoeAgain
//


#include <iostream>
#include <vector>
#include <array>
#include <iomanip>
#include <cctype>
using namespace std;





const int gameboardSize = 3;
char gameboardNum[gameboardSize][gameboardSize];

char enteredUpperColumn;
char enteredColumn;
int chosenRow, chosenColumn;



void printTheGrid() {
    cout << " A  B  C" << endl;
    cout << "1" << gameboardNum[0][0] << "  " << gameboardNum[0][1] << "  " << gameboardNum[0][2] << endl <<
        "2" << gameboardNum[1][0] << "  " << gameboardNum[1][1] << "  " << gameboardNum[1][2] << endl <<
        "3" << gameboardNum[2][0] << "  " << gameboardNum[2][1] << "  " << gameboardNum[2][2] << endl << endl;
}

void promptUserUpdate(string playerID) {

    bool validMove = false;

    while (!validMove) {
        cout << "Enter the row (1,2,3) and column (A,B,C) for player " << playerID << endl;
        cin >> chosenRow >> enteredUpperColumn;
        enteredColumn = tolower(enteredUpperColumn);

        if (enteredColumn == 'a') { chosenColumn = 0; }
        else if (enteredColumn == 'b') { chosenColumn = 1; }
        else if (enteredColumn == 'c') { chosenColumn = 2; }
        else
        {
            cout << "Invalid Column Number. Please enter A, B or C." << endl;
        }

        chosenRow -= 1;

        if (chosenRow < 0 || chosenRow >= gameboardSize)
        {
            cout << "Invalid Row Number. Please enter 1, 2 or 3." << endl;
        }
        else if (gameboardNum[chosenRow][chosenColumn] != ' ')
        {
            cout << "The place is taken already. Find another!" << endl;
        }
        else
        {
            gameboardNum[chosenRow][chosenColumn] = playerID[0];
            validMove = true;
        }
    }


    /*
     else {
     cout << "Enter the row and column for player " << playerID << endl;
     cin >> chosenRow >> chosenColumn;
     gameboardNum[chosenRow][chosenColumn] = 'O';

     }*/

}



bool checkIfGameWon() {

    //horizontal win
    for (int currentRow = 0; currentRow < gameboardSize; currentRow++) {
        if (gameboardNum[currentRow][0] != ' ' 
            && 
            gameboardNum[currentRow][0] == gameboardNum[currentRow][1] 
            && 
            gameboardNum[currentRow][1] == gameboardNum[currentRow][2]) {
            
                cout << "Player " << gameboardNum[currentRow][0] << " Won!!!" << endl << "On row number: " << currentRow + 1;
                return true;
        }
    }

    //vertical win
    for (int currentColumn = 0; currentColumn < gameboardSize; currentColumn++) {
        if (gameboardNum[0][currentColumn] != ' ' && gameboardNum[0][currentColumn] == gameboardNum[1][currentColumn] && gameboardNum[1][currentColumn] == gameboardNum[2][currentColumn]) {
            cout << "Player " << gameboardNum[0][currentColumn] << "Won!!!" << endl << "On column number: " << currentColumn + 1;
            return true;
        }
    }

    //diagonal win
    if (gameboardNum[0][0] != ' ' 
        && 
        gameboardNum[0][0] == gameboardNum[1][1] && gameboardNum[1][1] == gameboardNum[2][2] 
        || 
        gameboardNum[0][2] != ' ' 
        && 
        gameboardNum[0][2] == gameboardNum[1][1]
        && 
        gameboardNum[1][1] == gameboardNum[2][0]) {
            cout << "Player " << gameboardNum[1][1] << " Won!!! Diagonally." << endl;
            return true;
    }

    return false;
}





int main() {
    char continueOrNot;
    char typedContinueOrNot = ' ';

    do {

        //intialize the grid
        for (int r = 0; r < gameboardSize; r++) {
            for (int c = 0; c < gameboardSize; c++)
                gameboardNum[r][c] = ' ';
        }

        printTheGrid();

        bool gameWon = false;

        while (!gameWon) {

            //player X
            promptUserUpdate("X");
            cout << endl;
            printTheGrid();
            gameWon = checkIfGameWon();
            if (gameWon == true) {
                cout << "Do you wanna start a new game?(Y for yes, N for no.): ";
                cin >> typedContinueOrNot;
                continueOrNot = tolower(typedContinueOrNot);
            }
            else {
                //player O;
                promptUserUpdate("O");
                cout << endl;
                printTheGrid();
                gameWon = checkIfGameWon();
                if (gameWon == true) {
                    cout << endl << "Do you wanna start a new game?(Y for yes, N for no.): ";
                    cin >> typedContinueOrNot;
                    continueOrNot = tolower(typedContinueOrNot);
                }
                else {
                    continueOrNot = 'y';
                }
            }

        }

    } while (continueOrNot == 'y');
}
