//============================================================================
// Name        : newcplus.cpp
// Author      : punith
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//Inheritance should also be demo : create a class student - Inherit the class person
//Virtual functions, friend classes etc.

#include <iostream>
#include "rectangle.h"
#include "Person.h"
#include "Student.h"

using namespace std;

int main() {

	// create a Person instance using default constructor
	    Person *pOne = new Person();

	     // Create a Person instance using 2 argument constructor
	     Person *pTwo = new Person("Tom", "Thumb");

	     // Create a Person instance using 3 argument constructor
	     Person *pThree = new Person("Tom", "Thumb", 15);

	     Person p;

	     //Inheritance
	     Student student1;

	     Person &pRef = p;

	     p.SayHello();

	     // pointer method of calling a member function
	     pOne->SayHello();

	     // reference method of calling a member function
	     pRef.SayHello();

	     p.SetFirstName("Gerry");
	     std::cout << p.GetFirstName() << std::endl;

	     //validating check for the age
	     p.SetAge(-5);

	     //this line will not work beacuse firstName is private
	     //p.firstName = "Gerry";

	     //this line is not ok
	     //student1.firstName = "Tom";

	     //This line is ok
	     student1.SayHello();


	     //destroying the object - only pointer objects can be destroyed. Try destroying 'p' object
	     delete pOne;
	     delete pTwo;
	     delete pThree;
	     delete &pRef;

	     pOne->SayHello();

	     return 0;

	/*
	Rectangle small{3,2};
	Rectangle medium;
	Rectangle large{};
	int x {2};
	int the_area{small.get_area()};
	cout << "Area of the rectangle is" << endl;
	cout << the_area << endl;
	cout << x << endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "Enter menu choice " << endl << "More" << endl << "Quit" << endl;
	cout << small._width << endl << small._height << endl;
	cout << "For large rectangle - width and height values are initialized to zero" << endl;
	cout << large._width << endl << large._height << endl;
	cout << "some junk values for medium rectangle width and height" << endl;
	cout << medium._width << endl << medium._height << endl;
	return 0;
	*/
}
