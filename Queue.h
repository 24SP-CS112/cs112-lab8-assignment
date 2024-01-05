/* Queue.h provides a (linked-list-based) Queue class.
 * Victor Norman, for CS 112 at Calvin University.
 *
 * Notes:
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
#include <string>

// #include "QueueException.h"
using namespace std;

typedef int Item;

class Queue {
public:
    Queue();
    Queue(const Queue& original);
    ~Queue();
    Queue& operator=(const Queue& original);
    void getSize() const;
    bool isEmpty() const;
    bool isFull() const;
    Item peekFront() const;
    Item peekBack() const;
    void add(Item i);
    void remove();

protected:
    void makeCopyOf(const Queue& original);

private:
    unsigned mySize;
    struct Node {
        Node(const Item& it, Node* next);
        ~Node();
        Item myItem;
        Node* myNext;
    };
    Node* myFirst;
    Node* myLast;
};

#endif
