/*
 *
 * @author  Giordan Zeina
 * @version 1.0
 * @since   2025-10-27
 */

#ifndef GIORDANSTACK_H
#define GIORDANSTACK_H

#include <vector>
#include <string>
#include <iostream>

class GiordanStack {
private:
    std::vector<std::string> stringList;

public:
    // Adds item to the top of the stack
    void pushItem(const std::string& pushItem) {
        stringList.push_back(pushItem);
    }

    // Pops string at the top of the stack
    std::string popItem() {
        std::string top = stringList.back();
        stringList.pop_back();
        return top;
    }

    // Returns the first element (like Java peekItem)
    std::string peekItem() const {
        return stringList.front();
    }

    // Returns the stack vector (printing handled in Main)
    std::vector<std::string> getItem() const {
        return stringList;
    }

    // Returns the size of the stack
    int getSize() const {
        return stringList.size();
    }

    // Clears the stack
    void clearStack() {
        std::cout << "Empting the stack ...\n";
        stringList.clear();
    }

    // Checks if stack is empty
    bool isEmpty() const {
        return stringList.size() == 0;
    }
};

#endif
