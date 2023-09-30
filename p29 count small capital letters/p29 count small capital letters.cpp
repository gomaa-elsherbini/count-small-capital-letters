#include <iostream>
#include <string>
using namespace std;



enum enCharCase {Small=1, Capital=2};

enCharCase charCase(char myChar)
{
	if (isupper(myChar))
		return enCharCase::Capital;
	else if(islower(myChar))
		return enCharCase::Small;
}

string readString()
{
	string str;

	cout << "please enter the string?\n";
	getline(cin, str);

	return str;
}


void countCharacterCase( char myChar, int &smallLetters, int &capitalLetters)
{
	if (charCase(myChar) == enCharCase::Capital)
		capitalLetters++;
	else if (charCase(myChar) == enCharCase::Small)
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