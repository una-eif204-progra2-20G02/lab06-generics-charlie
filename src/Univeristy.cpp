
#include "University.h"

University::University() {

}

University::University(std::string nom) {
    nombre = nom;

}

University::~University() {

}

std::string University::getNombre() {
    return nombre;
}

void University::setNombre(std::string) {

}

void University::addProfessor(Professor *pro) {
    professorList.push(pro);
}



