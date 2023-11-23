#include "include/LinkedList.hpp"


template <typename T>
LinkedList<T>::LinkedList() {
    head = nullptr;
}

template <typename T>
LinkedList<T>::~LinkedList() {
    Node<T>* current = head;
    while (current != nullptr) {
        Node<T>* next = current->getNext();
        delete current;
        current = next;
    }
    head = nullptr;
}

template <typename T>
void LinkedList<T>::append(T new_data) {
    if (head == nullptr) {
        head = new Node<T>(new_data);
    } else {
        Node<T>* current = head;
        while (current->getNext() != nullptr) {
            current = current->getNext();
        }
        current->setNext(new Node<T>(new_data));
    }
}

template <typename T>
Node<T>* LinkedList<T>::getHead() {
    return head;
}
