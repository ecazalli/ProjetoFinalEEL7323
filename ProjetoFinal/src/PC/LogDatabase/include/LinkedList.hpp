

#pragma once
#include "Node.hpp"
#include <iostream>

template <typename T>
class LinkedList {
public:
    LinkedList(); // Constructor
    ~LinkedList(); // Destructor

    void append(T new_data); // Adds an element to the end of the list
    Node<T>* getHead(); // Returns a pointer to the first element of the list
private:
    Node<T>* head; // Pointer to the first element of the list
};

