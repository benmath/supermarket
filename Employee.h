#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
	string name;
	long ID;
	string title;

public:
	Employee(string name, long ID, string title);
	long getId() const;
	void setId(long id);
	const string& getName() const;
	void setName(const string& name);
	const string& getTitle() const;
	void setTitle(const string& title);
};

#endif
