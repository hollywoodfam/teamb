#include <iostream>
#include <string>

using namespace std;

int main()
{
	return 0;
}
void welcomePlayer(const string& aJumble)
{
	cout << "\t\t\Welcome to Word Jumble!" << endl << endl;
	cout << "Unscramble the letter to make a word." << endl;
	cout << "Enter 'quit' to quit the game." << endl;
	cout << "The jumble is: " << aJumble;
}
