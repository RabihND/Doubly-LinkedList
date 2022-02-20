#include "linkedlist.h"

//***************MAIN "LIST" CLASS MEMBERS****************
LinkedList::LinkedList()
    : head(nullptr)
    , tail(nullptr)
    , N(0) {

    };

LinkedList::LinkedList(const std::initializer_list<double>& v)
{
    LinkedList l;
    size_t i { 0 };
    for (const auto& el : v) {
        l.push_back(el);
    }
};

LinkedList::LinkedList(const LinkedList& list)
    : head(list.head)
    , tail(list.tail)
    , N(list.N) {

    };

LinkedList::~LinkedList()
{
    // clear();
    delete head;
    delete tail;
};

//***************NESTED "NODE" CLASS MEMBERS****************
LinkedList::Node::Node()
{
    value = 0;
    previous = nullptr;
    next = nullptr;
    // std::cout << " Node Default Constructor " << std::endl;
};

LinkedList::Node::Node(double Value)
    : value(Value)
    , next(nullptr)
    , previous(nullptr)

{
    setValue(Value);
};

double LinkedList::Node::getValue()
{
    return value;
};
void LinkedList::Node::setValue(double _value)
{
    value = _value;
};

void LinkedList::push_back(double data)
{
    if (head == nullptr) {
        // Empty Case
        head = new Node(data);
        // delete[] head;
    } else {
        // Non Empty Case
        Node* Current = head;
        while (Current->next != nullptr) {
            Current = Current->next;
        }
        Node* Temp = new Node(data);
        Temp->next = nullptr;
        Temp->previous = Current;
        Current->next = Temp;
        tail = Temp;
    }
};

void LinkedList::push_front(double data)
{
    if (tail == nullptr) {
        // Empty Case
        tail = new Node(data);
    } else {
        // Non Empty Case
        Node* Current = tail;
        while (Current->previous != nullptr) {
            Current = Current->previous;
        }
        Node* Temp = new Node(data);
        Temp->next = Current;
        Temp->previous = nullptr;
        Current->previous = Temp;
        head = Temp;
    }
};

double LinkedList::pop_back()
{
    if (head == nullptr) {
        // Empty linked list
        throw std::out_of_range("Tried  to pop empty  linked list!");
    }
    if (head->next == nullptr) {
        // Size one case
        return head->getValue();
        delete head;
        head = nullptr;
    } else {
        // Size 2 or more case
        Node* Current = head;
        while (Current->next != nullptr) {
            Current = Current->next;
        }
        tail = Current->previous;
        Current->previous->next = nullptr;
        return Current->getValue();
        delete Current;
    }
};

double LinkedList::pop_front()
{
    if (tail == nullptr) {
        // Empty linked list
        throw std::out_of_range("Tried  to pop empty  linked list!");
    }
    if (tail->previous == nullptr) {
        // Size one case
        return tail->getValue();
        delete tail;
        tail = nullptr;
    } else {
        // Size 2 or more case
        Node* Current = tail;
        while (Current->previous != nullptr) {
            Current = Current->previous;
        }
        head = Current->next;
        Current->next->previous = nullptr;
        return Current->getValue();
        delete Current;
    }
};

double LinkedList::back()
{
    if (head == nullptr) {
        // Empty linked list
        throw std::logic_error("Tried  to call back elemet on empty  linked list !");
    }
    Node* Current = head;
    while (Current->next != nullptr) {
        Current = Current->next;
    }
    tail = Current;
    return tail->getValue();
};

double LinkedList::front()
{
    if (head == nullptr) {
        // Empty linked list
        throw std::logic_error("Tried  to call front element on empty  linked list !");
    }
    return head->getValue();
};

bool LinkedList::empty()
{
    return head == nullptr;
};