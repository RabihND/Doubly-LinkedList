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