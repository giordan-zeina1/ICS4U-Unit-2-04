/*
 *
 * @author  Giordan Zeina
 * @version 1.0
 * @since   2025-10-27
 */

#include <iostream>
#include "GiordanStack.h"

int main() {
    // variables
    GiordanStack stack;

    GiordanStack fruitStack;
    std::cout << "Fruit Items: ";
    for (std::string &s : fruitStack.getItem()) std::cout << s << " ";
    std::cout << "\nThe size of the stack is: " << fruitStack.getSize() << "\n";
    std::cout << "Is the stack empty: " << (fruitStack.isEmpty() ? "true" : "false") << "\n";
    fruitStack.pushItem("apple");
    fruitStack.pushItem("banana");
    fruitStack.pushItem("cherry");
    std::cout << "Fruit Items: ";
    for (std::string &s : fruitStack.getItem()) std::cout << s << " ";
    std::cout << "\nPopped fruit items: " << fruitStack.popItem() << "\n";
    std::cout << "Fruit Items: ";
    for (std::string &s : fruitStack.getItem()) std::cout << s << " ";
    std::cout << "\nThe size of the stack is: " << fruitStack.getSize() << "\n";
    std::cout << "Is the stack empty: " << (fruitStack.isEmpty() ? "true" : "false") << "\n";
    std::cout << "The top fruit is: " << fruitStack.peekItem() << "\n";
    std::cout << "The size of the stack is: " << fruitStack.getSize() << "\n";
    fruitStack.clearStack();
    std::cout << "The size of the stack is: " << fruitStack.getSize() << "\n";
    std::cout << "Is the stack empty: " << (fruitStack.isEmpty() ? "true" : "false") << "\n";

    GiordanStack colorStack;
    std::cout << "\nColor Items: ";
    for (std::string &s : colorStack.getItem()) std::cout << s << " ";
    std::cout << "\nThe size of the stack is: " << colorStack.getSize() << "\n";
    std::cout << "Is the stack empty: " << (colorStack.isEmpty() ? "true" : "false") << "\n";
    colorStack.pushItem("red");
    colorStack.pushItem("green");
    colorStack.pushItem("blue");
    std::cout << "Color Items: ";
    for (std::string &s : colorStack.getItem()) std::cout << s << " ";
    std::cout << "\nPopped color items: " << colorStack.popItem() << "\n";
    std::cout << "Color Items: ";
    for (std::string &s : colorStack.getItem()) std::cout << s << " ";
    std::cout << "\nThe size of the stack is: " << colorStack.getSize() << "\n";
    std::cout << "Is the stack empty: " << (colorStack.isEmpty() ? "true" : "false") << "\n";
    std::cout << "The top color is: " << colorStack.peekItem() << "\n";
    std::cout << "The size of the stack is: " << colorStack.getSize() << "\n";
    colorStack.clearStack();
    std::cout << "The size of the stack is: " << colorStack.getSize() << "\n";
    std::cout << "Is the stack empty: " << (colorStack.isEmpty() ? "true" : "false") << "\n";

    GiordanStack dogStack;
    std::cout << "\nDog Items: ";
    for (std::string &s : dogStack.getItem()) std::cout << s << " ";
    std::cout << "\nThe size of the stack is: " << dogStack.getSize() << "\n";
    std::cout << "Is the stack empty: " << (dogStack.isEmpty() ? "true" : "false") << "\n";
    dogStack.pushItem("poodle");
    dogStack.pushItem("retriever");
    dogStack.pushItem("beagle");
    std::cout << "Dog Items: ";
    for (std::string &s : dogStack.getItem()) std::cout << s << " ";
    std::cout << "\nPopped dog items: " << dogStack.popItem() << "\n";
    std::cout << "Dog Items: ";
    for (std::string &s : dogStack.getItem()) std::cout << s << " ";
    std::cout << "\nThe size of the stack is: " << dogStack.getSize() << "\n";
    std::cout << "Is the stack empty: " << (dogStack.isEmpty() ? "true" : "false") << "\n";
    std::cout << "The top dog is: " << dogStack.peekItem() << "\n";
    std::cout << "The size of the stack is: " << dogStack.getSize() << "\n";
    dogStack.clearStack();
    std::cout << "The size of the stack is: " << dogStack.getSize() << "\n";
    std::cout << "Is the stack empty: " << (dogStack.isEmpty() ? "true" : "false") << "\n";
    std::cout << "\nDone.\n";
    return 0;
}
