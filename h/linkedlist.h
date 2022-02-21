#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iomanip>
#include <iostream>

class LinkedList {
public:
    class Node { // Nested Class
    public:
        Node(); // Default Constructor
        Node(double Value); // Costructor
        Node* next;
        Node* previous;
        double getValue(); // Get Value
        void setValue(double _value); // Set Value
        friend std::ostream& operator<<(std::ostream&, const LinkedList::Node&);

    private:
        double value;
    };
    LinkedList(); // Default Constructor
    LinkedList(const LinkedList&); // Copy constructor
    LinkedList(const std::initializer_list<double>& v);
    ~LinkedList(); // Destructor
    void push_back(double value); // Add Node after "Tail"
    void push_front(double); // Add Node before "Head"
    double pop_back(); // Delete Node from END
    double pop_front(); // Delete Node From FRONT
    double back(); // Get the back element
    double front(); // Get the front element
    bool empty(); // boolian check if the list is empty
    void clear(); // clear Node
    void show();
    int getSize();
    void extend(const LinkedList&);
    int operator[](size_t) const;

private:
    int N { 0 };

public:
    Node* head;
    Node* tail;
};

#endif