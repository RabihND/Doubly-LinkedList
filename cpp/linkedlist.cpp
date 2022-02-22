#include "linkedlist.h"

//***************MAIN "LIST" CLASS MEMBERS****************
LinkedList::LinkedList()
    : head(nullptr)
    , tail(nullptr)
    , N(0) {

    };

LinkedList::LinkedList(std::initializer_list<double> v)
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

double LinkedList::Node::getValue() const
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

void LinkedList::clear()
{
    Node* Current = head;
    while (Current != nullptr) {
        Node* Temp = Current->next;
        // delete Current;
        Current = Temp;
    }
    head = nullptr;
    tail = nullptr;
};

void LinkedList::show()
{
    if (head == nullptr) {
        // Empty linked list
        throw std::logic_error("Tried  to call front element on empty  linked list !");
    }
    Node* list = head;
    while (list) {
        std::cout << list->getValue() << "  ";
        list = list->next;
    }
    std::cout << std::endl;
};

int LinkedList::getSize()
{
    Node* tmp = head;
    int counter = 0;

    while (tmp != NULL) {
        counter += 1;
        tmp = tmp->next;
    }
    return counter;
};

void LinkedList::extend(const LinkedList&)
{
    for (Node* item { linkedlist.head }; item; item = item->next)
        this->push_back(item->getValue());
};

//***********************************************

int LinkedList::operator[](size_t ind) const
{
    // Start at the head of the list
    Node* current = head;
    // Loop as long as we don't go of the end of the list and `n` is larger than zero
    // Also decrement `n` after checking its value
    while (current != nullptr && ind-- > 0) {
        // Make `current` point to the next node in the list
        current = current->next;
    }
    // If `current` is a null pointer, then we have gone of the end of the list, return some default value
    // Otherwise return the value of node we were looking for
    return (current == nullptr ? 0 : current->getValue());
};

std::ostream& operator<<(std::ostream& os, const LinkedList::Node& list)
{

    os << list.getValue();

    return os;
};