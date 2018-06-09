/*
 * .h
 *
 *  Created on: 27-May-2018
 *      Author: punith
 */

#ifndef PERSON_H_
#define PERSON_H_

#pragma once
#include <string>

class Person
{

private:
	std::string firstName;
	std::string lastName;

	int age;

public:
	Person();

	Person(std::string fName, std::string lName);

	Person(std::string fName, std::string lName, int age);

	~Person();

	void SetFirstName(std::string fName);
	std::string GetFirstName();

	void SetLastName(std::string lName);
	std::string GetLastName();

	void SetAge(int age);
	int GetAge();

	void SayHello();
};

#endif /* PERSON_H_ */
