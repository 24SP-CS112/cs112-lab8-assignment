/*
 * Stack.cpp defines the dynamically allocated (array-based) Stack operations.
 * Joel Adams, for CS 112 at Calvin University.
 */

#include "Stack.h"

/* explicit-value constructor
 * Parameter: capacity, an unsigned value.
 */
Stack::Stack(unsigned capacity) {
    mySize = 0;
    myCapacity = capacity;
    myArray = new Item[capacity];
}

/* copy constructor
 * Parameter: original, a Stack (const reference).
 */
Stack::Stack(const Stack& original) {
	makeCopyOf(original);
}

/* utility method containing code refactored from
 * the copy constructor and operator=.
 * Parameter: original, a Stack (const reference).
 */
void Stack::makeCopyOf(const Stack& original) {
    myCapacity = original.myCapacity;
    myArray = new Item[myCapacity];

    for (unsigned i = 0; i < myCapacity; ++i) {
        myArray[i] = original.myArray[i];
    }
    mySize = original.mySize;
}

Stack::~Stack() {
    delete[] myArray;
    myArray = nullptr;
    myCapacity = 0;
    mySize = 0;
}

/* assignment operator
 * Parameter: original, a Stack (const reference).
 */
Stack& Stack::operator=(const Stack& original) {
    if (this != &original) {
        delete[] myArray;
        makeCopyOf(original);
    }
    return *this;
}
