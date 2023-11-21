

#pragma once
#include "Node.hpp";

template <typename T>
class Queue {
private:
    Node<T>* head; // Pointer to the head of the queue
    Node<T>* tail; // Pointer to the tail of the queue
    unsigned long size; // Current size of the queue
    unsigned long max_size; // Maximum size of the queue

public:
 Queue();  // Constructor
 Queue(unsigned long max); // Constructor with maximum size
~Queue();  // Destructor
void enqueue(T item); // Add element to the queue 
T dequeue(); // Remove element from the queue
T front(); // Get the front element of the queue
bool empty(); // Check if the queue is empty
void setMaxSize(unsigned long max); // Set the maximum size of the queue
unsigned long getSize(); // Get the current size of the queue
};
