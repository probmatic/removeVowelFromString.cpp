/*probmatic*/
/*Program: Remove Vowel */
#include <iostream> //Input & Output
#include <string> //String
using namespace std;

string substr(string textline); //Subtracts vowels from string
bool isVowel(char s); //checks for vowels


int main() //Main function
{
	string textline;

	cout << "Please enter a sentence: " << endl;
	getline(cin, textline);

	textline = substr(textline);
	cout << "Your new sentence without vowels: " << endl;
	cout << textline << endl;

	system("pause");
	return 0;
}


string substr(string textline) //Function that passes the remove vowel function
{
	int f = 0;
	string newstring;
	int size = textline.length(); //size of string


	for (int i = 0; i < size; i++) //stops when i is less than the size of string
	{
		if (isVowel(textline[i]))
		{
			newstring = textline[i]; //set strings "equal" to each other
			textline.replace(f, 1, newstring); //replace
			f++; //incrementing
		}
	}
	textline.erase(f, 999);
	return textline;
}

bool isVowel(char s) //Function that checks if there is a vowel
{
	switch (tolower(s)) //forces to lowercase
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'y':
		return false;
	default:
		return true;
	}
}

