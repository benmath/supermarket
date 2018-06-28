#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

/*******	Employee Class	******/
class Employee {
    private:
        std::string name;
        long ID;
        std::string title;

    public:
        Employee(std::string name, long ID, std::string title);
        long getId() const;
        void setId(long id);
        const std::string& getName() const;
        void setName(const std::string& name);
        const std::string& getTitle() const;
        void setTitle(const std::string& title);
};

/*******	Manager Class	******/
class Manager : public Employee {
    private:
        std::string password;
    public:
        // Manger's password is currently hard-coded to be 1.
        Manager(std::string name, long ID, std::string title = "Manager", std::string password = "1");
        const std::string& getPassword() const;
        void setPassword(const std::string& password);
};

#endif
