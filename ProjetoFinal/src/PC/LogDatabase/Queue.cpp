

#include <limits>;

template <typename T>
Queue<T>::Queue() {
    head = tail = nullptr;
    size = 0;
    max_size = std::numeric_limits<unsigned long>::max(); // max value of unsigned long in time of execution
}

Queue<T>::Queue(unsigned long max){
    head = tail = nullptr;
    size = 0;
    max_size = max;
}

template <typename T>
Queue<T>::~Queue() {
    while (!empty()) {
        dequeue();
    }
}

template <typename T>
void Queue<T>::enqueue(T item) {
    if (size < max_size) {
        Node<T>* new_node = new Node<T>(item);
        if (!empty()) {
            tail->next = new_node;
            tail = new_node;
            
        } else {
            head = tail = new_node;
        }
        size++;
    }
}

template <typename T>
T Queue<T>::dequeue() {
    if (!empty()) {
        T item = head->data;
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        size--;
        return item;
    }
}

template <typename T>
T Queue<T>::front() {
    if (!empty()) {
        return head->data;
    }
}

template <typename T>
bool Queue<T>::empty() {
    return head == nullptr;
}

template <typename T>
void Queue<T>::setMaxSize(unsigned long max) {
    max_size = max;
}

template <typename T>
unsigned long Queue<T>::getSize() {
    return size;
}
