#ifndef ARRAYCLASS_H
#define ARRAYCLASS_H

#include <iostream>

class array {
public:
	array(); // default constructor, capacity of 100
	array(const array &source); //copy constructor
	~array(); //destructor
	array &operator =(const array &rhs); // assignment operator
	int &operator [](size_t index) const; 	// For Access
	array &operator +=(int val); //adding one value at the end of another
	int getSize() const;
	void sizerUpper ();
	friend array operator +(const array &lhs, int rhs);
	friend bool operator ==(const array &lhs, const array &rhs);
	friend bool operator !=(const array &lhs, const array &rhs);
	friend std::ostream &operator <<(std::ostream &os, const array &arr);
private:
	void checkCapacity();
	int *arr;
	int capacity, size;
};

#endif
