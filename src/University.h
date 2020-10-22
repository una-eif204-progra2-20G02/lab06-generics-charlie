#include "Professor.h"
#include <vector>
#include <cassert>

template<typename T>
class Stack {
private:
    std::vector<T> obj;
public:
    void push(T const &nObj);

    void pop();

    T const &top() const;

    bool empty() const {
        return obj.empty();
    }

};

template<typename T>
void Stack<T>::push(T const &elem) {
    obj.push_back(elem);
}

template<typename T>
void Stack<T>::pop() {
    assert(!obj.empty());
    obj.pop_back();
}

template<typename T>
T const &Stack<T>::top() const {
    assert(!obj.empty());
    return obj.back();
}

class University {

    std::string nombre;
    Stack<Professor *> professorList;
public:
    University();

    University(std::string nom);

    virtual ~University();

    std::string getNombre();

    void setNombre(std::string);

    void addProfessor(Professor *pro);

};




