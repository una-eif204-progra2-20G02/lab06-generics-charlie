#include "Professor.h"


Professor::Professor(): Person(){}
Professor::Professor( std::string name, std::string nameTit,std::string grade): Person(name){ tit* = new Title(std::string nameTit, std::string grade)}

Professor::~Professor(){}

std::string Professor::toString() const {
    std::stringstream s;
    s << Person::toString();
    s << tit->toString();
    return s.str();
}


