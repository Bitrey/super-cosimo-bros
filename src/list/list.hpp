#ifndef _LIST_HPP_
#define _LIST_HPP_

#include <iostream>

#include "list.hpp"

template <typename T>
class List {
   private:
    struct Node {
        T data;
        Node* next;
    };
    Node* head;
    int size;
    bool is_out_of_range(int index);

   public:
    List();
    Node* begin() const { return head; }
    Node* end() const { return nullptr; }
    void push(T data);
    T pop(int index);
    T& at(int index);
    bool contains(T data);
    void set(int index, T data);
    int length();
    void clear();
    void print();
};

template <typename T>
List<T>::List()
    : head(nullptr), size(0) {}

template <typename T>
bool List<T>::is_out_of_range(int index) {
    return index < 0 || index >= size;
}

template <typename T>
void List<T>::push(T data) {
    Node* node = new Node{data, nullptr};
    if (head == nullptr) {
        head = node;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = node;
    }
    size++;
}

template <typename T>
T List<T>::pop(int index) {
    if (index < 0)
        index = size + index;

    if (is_out_of_range(index))
        throw std::out_of_range("pop: index out of range");

    Node* current = head;
    if (index == 0) {
        head = head->next;
        T data = current->data;
        delete current;
        size--;
        return data;
    }
    for (int i = 0; i < index - 1; i++) {
        current = current->next;
    }
    Node* node_to_delete = current->next;
    T data = node_to_delete->data;
    current->next = node_to_delete->next;
    delete node_to_delete;
    size--;
    return data;
}

template <typename T>
T& List<T>::at(int index) {
    if (index < 0)
        index = size + index;

    if (is_out_of_range(index))
        throw std::out_of_range("at: index out of range");

    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    return current->data;
}

template <typename T>
bool List<T>::contains(T data) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == data)
            return true;
        current = current->next;
    }
    return false;
}

template <typename T>
void List<T>::set(int index, T data) {
    if (is_out_of_range(index))
        throw std::out_of_range("set: index out of range");

    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    current->data = data;
}

template <typename T>
int List<T>::length() {
    return size;
}

template <typename T>
inline void List<T>::clear() {
    while (size > 0) {
        pop(0);
    }
}

template <typename T>
void List<T>::print() {
    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << at(i);
        if (i != size - 1)
            std::cout << ", ";
    }
    std::cout << " ]";
}

#endif  // _LIST_HPP_
