#pragma once
#include "Employee.h"
class HourlyEmployee :
	public Employee
{
private:

public:
	HourlyEmployee();
	~HourlyEmployee();
	float HourlyEmployee::setHourlyRate();
	int HourlyEmployee::setHoursWorked();
};

