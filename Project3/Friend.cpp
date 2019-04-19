#include "Friend.h"
#include <iostream>
#include <string>

using namespace std;

Friend::Friend(string name)
{
	//set name
	cout << "I am born with the name " << name << endl;
	Name = name;
}

void Friend::Talk(string sayWhat)
{
	cout << sayWhat << endl;
}

string Friend::GetName() 
{
	return Name;
}

Friend::~Friend()
{
}

