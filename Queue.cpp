
#include "Queue.h"

#include "QueueException.h"

Queue::Queue() {
}

Queue::Queue(const Queue& original) {
}

Queue::~Queue() {
}

Queue::Node::Node(const Item& it, Node* next) {
}

Queue::Node::~Node() {
}

int Queue::getSize() const {
}

bool Queue::isEmpty() const {
}

bool Queue::isFull() const {
}

Item Queue::peekFront() const {
}

Item Queue::peekBack() const {
}

void Queue::add(const Item& it) {
}

void Queue::remove() {
}
