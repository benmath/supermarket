#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee(string name, long ID, string title) {
	this->name = name;
	this->ID = ID;
	this->title = title;
}

long Employee::getId() const {
	return ID;
}

void Employee::setId(long id) {
	ID = id;
}

const string& Employee::getName() const {
	return name;
}

void Employee::setName(const string& name) {
	this->name = name;
}

const string& Employee::getTitle() const {
	return title;
}

void Employee::setTitle(const string& title) {
	this->title = title;
}
