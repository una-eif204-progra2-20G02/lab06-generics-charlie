
#include "Person.h"
#include <utility>


Person::Person() {
    name = "";

}

Person::Person(std::string n) {
    name = n;

}

Person::~Person() {

}

std::string Person::getFirstName() {
    return name;

}

void Person::setFirstName(std::string nom) {
    name = nom;

}

std::string Person::toString() const {
    std::stringstream s;

    s << "Nombre: " << name << "\n";

    return s.str();

}