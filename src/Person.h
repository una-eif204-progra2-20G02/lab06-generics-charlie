
//#ifndef  Consulta

#include <string>
#include <ostream>
#include <sstream>


class Person {
private:
std::string name;

public:
Person();
Person(std::string name);
virtual~Person();    
std::string getFirstName();
void setFirstName(std::string name);