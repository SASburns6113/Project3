#include <iostream>
#include <string>
#include "Friend.h"

using namespace std;

int main() 
{
	cout << "\n\n \t Welcome to your new group of friends!\n\n";

	Friend Garrett("Garrett");
	Friend Josh("Josh");
	Friend Jane("Jane");
	Friend Parry("Parry");

	Josh.Talk("Hi, my name is Josh.");
	Garrett.Talk("My name is Garrett.");
	Jane.Talk("hello, i'm Jane.");
	Parry.Talk("Hey, my name is Parry.");

	system("pause");
	return 0;
}