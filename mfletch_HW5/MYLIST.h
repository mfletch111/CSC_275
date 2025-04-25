//
// Created by marli on 4/24/2025.
//

#ifndef MYLIST_H
#define MYLIST_H

#include <iostream>
using namespace std;

template <class T> class MyList;

template <class T>
class Node {
    T data;
    Node<T>* link;
    friend class MyList<T>;

    Node(const T& theData, Node<T>* theLink = nullptr)
        : data(theData), link(theLink) {}

};

template <class T>
class MyList {
private:
    Node<T>* head;

public:
    MyList() : head(nullptr) {}

    void insertHead(const T& theData) {
        head = new Node<T>(theData, head);
    }
    T deletehead() {
        if (!head) throw runtime_error("Empty list");
        Node<T>* temp = head;
        T data = temp->data;
        head = head->link;
        delete temp;
        return data;
    }
    bool search(const T& target) {
        Node<T>* current = head;
        while (current) {
            if (current->data == target) return true;
            current = current->link;
        }
        return false;
    }
    void display() {
        Node<T>* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->link;
        }
    }
    ~MyList() {
        while (head) {
            Node<T>* temp = head;
            head = head->link;
            delete temp;
        }
    }
};

#endif //MYLIST_H
