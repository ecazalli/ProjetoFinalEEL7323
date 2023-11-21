
#include "include/Node.hpp"

template <typename T>
Node<T>::Node(T new_data, Node<T>* new_next) {
    data = new_data;
    next = new_next;
}

template <typename T>
Node<T>::Node(T new_data) {
    data = new_data;
    next = nullptr;
}

template <typename T>
Node<T>* Node<T>::getData() {
    return *data;
}

template <typename T>
Node<T>* Node<T>::getNext() {
    return next;
}

template <typename T>
void Node<T>::setData(T  new_data) {
    data = new_data;
}

template <typename T>
void Node<T>::setNext(Node<T>* new_next) {
    next = new_next;
}
