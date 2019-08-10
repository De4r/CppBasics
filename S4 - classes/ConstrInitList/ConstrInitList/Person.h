#pragma once
#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person() : name("Undefined"), age(0) {};
	Person(string name, int age) : name(name), age(age) {};
	string toString();
};

