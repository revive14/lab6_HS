#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



class personType {
	string firstName;
	string lastName;
	
public:

	personType(string firstName = " ", string lastName= " "  );

	void print(string firstName, string lastName);
};