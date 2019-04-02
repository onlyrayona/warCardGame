// Lab 6
// Programmer: Rayona Young
// Editor(s) used: PyCharm CE
// Compiler(s) used: LLVM-GCC
//
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;


int main()
{

srand(time(0)); //call srand

//COMPUTER
//calculate random number between 2 and 14 to determine computer's card value
    int compCard = 2 + rand() % 12;
    string compCardValue;

//assign computer's card value based on random number
    if (compCard <= 10)
    compCardValue  = std::to_string(compCard);

    else if (compCard == 11)
    compCardValue  = "Jack";

    else if (compCard == 12)
    compCardValue  = "Queen";

    else if (compCard == 13)
    compCardValue  = "King";

    else if (compCard == 14)
    compCardValue  = "Ace";

//calculate random number between 0 and 3 to determine computer's card suit
    int compSuit = rand() % 3;
    string compSuitValue;

//assign computer's card suit based on random number
    if (compSuit == 0)
    compSuitValue = "Spades";

    else if (compSuit == 1)
    compSuitValue = "Diamonds";

    else if (compSuit == 2)
    compSuitValue = "Hearts";

    else if (compSuit == 3)
    compSuitValue = "Clubs";

//HUMAN
//calculate random number between 2 and 14 to determine human's card value

    int humCard = 2 + rand() % 12;
    string humCardValue;

//assign human's card value based on random number
    if (humCard <= 10)
    humCardValue  = std::to_string(humCard);

    else if (humCard == 11)
    humCardValue  = "Jack";

    else if (humCard == 12)
    humCardValue  = "Queen";

    else if (humCard == 13)
    humCardValue  = "King";

    else if (humCard == 14)
    humCardValue  = "Ace";

//calculate random number between 0 and 3 to determine human's card suit
    int humSuit = rand() % 3;
    string humSuitValue;

//assign human's card suit based on random number
    if (humSuit == 0)
    humSuitValue = "Spades";

    else if (humSuit == 1)
    humSuitValue = "Diamonds";

    else if (humSuit == 2)
    humSuitValue = "Hearts";

    else if (humSuit == 3)
    humSuitValue = "Clubs";

//Output computer and human card values and suits
    cout << "Computer's card is a " << compCardValue << " of " << compSuitValue <<endl;
    cout << "Human's card is a " << humCardValue << " of " << humSuitValue <<endl;

//compare computer and human's cards and output result

    if (compCard == humCard)
    cout << "It's a tie." << endl;

    else if (compCard > humCard)
    cout << "Computer wins!" << endl;

    else if (compCard < humCard)
    cout << "Human wins!" << endl;

} //main