// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int weight = 0;
	string noun = "";
	string verb = "";
	string adj = "";
	string place = "";
	string name = "";
	string food = "";
	cout << "Give me a noun" << endl;
	cin >> noun;
	cout << "Give me a verb" << endl;
	cin >> verb;
	cout << "Give me an adjective" << endl;
	cin >> adj;
	cout << "Give me a place" << endl;
	cin >> place;
	cout << "Give me a name" << endl;
	cin >> name;
	cout << "Give me a food" << endl;
	cin >> food;
	cout << "A person named " << name << " wants to go to " << place << endl;
	cout << "So " << name << " grabbed their " << noun << " and started to " << verb << " to "<< place << "." << endl;
	cout << name << " wanted to eat a " << food << "." << endl;
	cout << name << " said it tasted " << adj << "!!" << endl;
    return 0;
}

