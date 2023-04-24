#include "greetPerson.h"

void getName(std::string& name) {
    std::cout << "What is your first name? ";
    std::getline(std::cin, name);
}

void greetName(std::string name) {
    std::cout << "Welcome " << name << " to our program." << std::endl;
}