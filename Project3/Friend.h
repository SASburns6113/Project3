#pragma once
#include <string>

using namespace std;

class Friend
{
public:
	Friend(string name);
	
	void Talk(string sayWhat);
	string GetName();
	
	
	~Friend();

private:
	string Name;
	int Age;

};

