#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Employee
{
private:
	string name;
	int staffNumber;
	int numberOfEmployees;
public:
	Employee(string, int);
	~Employee();
	
	double salary();


};
#endif
