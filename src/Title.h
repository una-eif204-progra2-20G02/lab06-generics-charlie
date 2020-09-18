
#include <string>
#include <ostream>
#include <sstream>

class Title{
private:
std::string name;
std::string grade;
public:
Title();
Title(std::string nom, std::string gra);
std::string getName();
void setName(std::string nom);
std::string getGrade();
void setGrade(std::string gra);
std::string toString();
};