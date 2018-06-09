/*
 * Person.cpp
 *
 *  Created on: 31-May-2018
 *      Author: punith
 */

#include "Person.h"
#include <iostream>

Person::Person()
{
	std::cout << "Constructing object" << std::endl;
}

Person::Person(std::string fName, std::string lName)
{
	firstName=fName;
	lastName=lName;
}

Person::Person(std::string fName, std::string lName, int age)
{
	firstName=fName;
	lastName=lName;
	age=age;
}

Person::~Person()
{
	std::cout << "Destroy the object" << std::endl;
}

void Person::SetFirstName(std::string fName)
 {
     this->firstName = fName;
 }

 std::string Person::GetFirstName()
 {
     return this->firstName;
 }

 void Person::SetLastName(std::string lName)
 {
     this->lastName = lName;
 }

 std::string Person::GetLastName()
 {
     return this->lastName;
 }

 void Person::SetAge(int age)
 {
     if (age > 0)
     {
         this->age = age;
     }
     else
     {
         std::cout << "Please enter a valid age" << std::endl;
     }
 }

 int Person::GetAge()
 {
     return this->age;
 }

void Person::SayHello()
{
   std::cout << "Hello" << std::endl;
}
