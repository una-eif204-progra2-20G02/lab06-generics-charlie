#include "Title.h"
#include <utility>

Title::Title() {
    name = "";

}

Title::Title(std::string n, std::string g) {
    name = n;

}

Title::~Title() {

}

std::string Title::getName() {
    return name;

}

void Title::setName(std::string nom) {
    name = nom;

}
std::string Title::getGrade() {
    return grade;
}
void Title::setGrade(std::string gra) {
    grade = gra;
}

std::string Title::toString() const {
    std::stringstream s;

    s << "Nombre: " << name << "\n";
    s << "Nivel academico" << grade << "\n";

    return s.str();

}




