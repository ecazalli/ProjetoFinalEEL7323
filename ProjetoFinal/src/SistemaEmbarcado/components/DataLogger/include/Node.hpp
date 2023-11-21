#pragma once


// The Node class represents a node in a linked list. Each node contains a data value and a pointer to the next node in the list.
template <typename T>
class Node {
    private:
        T data;
        Node<T>* next;
    public:
        Node(T new_data, Node<T>* new_next);
        Node(T new_data);
        Node<T>* getData();
        Node<T>* getNext();
        void setData(T new_data);
        void setNext(Node<T>* new_next);
};
