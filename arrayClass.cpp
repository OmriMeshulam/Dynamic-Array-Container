#include <iostream>
#include "arrayClass.h"
#include <cstdlib>

using std::ostream;
using namespace std;

//constructor
array::array() : arr(new int[100]), capacity(100), size(0) {}
//copy constructor
array::array(const array &source) : arr(new int[source.capacity]), capacity(source.capacity), size(source.size) {
    for (int i = 0; i < capacity; i++)
	arr[i] = source.arr[i];
}
//destructure
array::~array() {
	delete [] arr;
}
//assignment operator
array &array::operator =(const array &rhs) {
	if (this == &rhs) return *this;
	delete [] arr;
	arr = new int[rhs.capacity];
	capacity= rhs.capacity;
	for (int i = 0; i < capacity; i++)
		arr[i] = rhs.arr[i];
	return *this;
}
//for access
int &array::operator [](size_t index) const {return arr[index];}

//adding an element at the end of an array.
array &array::operator +=(int val) {
	checkCapacity();
	arr[size] = val;
	this->size++;
	return *this;
}


array operator +(array &lhs, int rhs) {
	lhs[lhs.getSize()] = rhs;
	lhs.sizerUpper();
	return lhs;
}

bool operator ==(const array &lhs,const array &rhs) {
	if (lhs.getSize() != rhs.getSize()) return false;
	for (int i = 0; i < lhs.getSize(); i++)
		if (lhs.arr[i] != rhs.arr[i]) return false;
	return true;
}
bool operator !=(const array &lhs, const array &rhs)  {
	if (lhs.getSize() != rhs.getSize()) return true;
	for (int i = 0; i < lhs.getSize(); i++)
		if (lhs.arr[i] != rhs.arr[i]) return true;
	return false;
}
// get and set amount of elements
int array::getSize() const {return size;}

void array::sizerUpper(){
    this->size++;
    return;
}


ostream &operator <<(ostream &os, const array &arr) {
    os << "{";
	for (int i = 0; i < arr.size; i++)
		os << arr[i] << (i < arr.size-1 ? ", " : "");
	os << "}";	return os;
}

void array::checkCapacity() {
	if (size < capacity) return;
	capacity *= 2;
	int *tmp = new int[capacity];
	for (int i = 0; i < size; i++)
		tmp[i] = arr[i];
	delete [] arr;
	arr = tmp;
}
