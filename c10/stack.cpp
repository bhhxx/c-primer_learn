#include "stack.h"
#include <iostream>
Stack::Stack() {
    top = 0;
}

bool Stack::isEmpty() const {
    return top == 0;
}

bool Stack::isFull() const {
    return top == MAX;
}

bool Stack::push(const Item &item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else {
        std::cout << "Stack is full!" << std::endl;
        return false;
    }
}

bool Stack::pop(Item &item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else {
        std::cout << "Stack is empty!" << std::endl;
        return false;
    }
}