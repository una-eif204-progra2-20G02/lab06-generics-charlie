
#include "Person.h"
#include "Title.h"


class Professor: Person {
private:
Title tit;
public:
Professor();
Professor( std::string name,std::string nameTit,std::string grade);
virtual ~Professor();
