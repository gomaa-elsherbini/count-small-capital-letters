#include <iostream>
#include <string>
using namespace std;

string readString()
{
	string str;

	cout << "please enter the string?\n";
	getline(cin, str);

	return str;
}

void countCharacterCase(char myChar, int &smallLetters, int &capitalLetters)
{
	if (isupper(myChar))
		capitalLetters++;
	else if (islower(myChar))
		smallLetters++;
}

void printStringDetails(string str)
{
	int smallLetters = 0;
	int capitalLetters = 0;

	for (int i = 0; i < str.length(); i++)
	{
		countCharacterCase(str[i], smallLetters, capitalLetters);
	}

	cout << "\nString length = " << str.length() << endl;
	cout << "Number of Capital letters = " << capitalLetters << endl;
	cout << "Number of Small Letters = " << smallLetters << endl;
}

int main()
{
	string str;

	str = readString();

	printStringDetails(str);



	system("pause>0");

	return main();

}