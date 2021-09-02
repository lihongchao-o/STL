#include <iostream>
#include <string>
#include <tuple>

using namespace std;


class Person 
{
public:
    static Person newPerson(string name, int age) {
        return {name, age};
    }
    void sayHello() {
        cout << "Hello, my name is " << this->name << " and I am " << this->age << " y.o." << endl;
    }
    tuple<string, int> getData() {
        return make_tuple(name, age);
    }
private:
    string name;
    int age;
    Person(string name, int age)
        : name(name), age(age)
    {}
};


int main()
{
    Person hchao = Person::newPerson("Wuyanzu", 47);
    Person *str_ptr = &hchao;

    cout << "Hello, my name is " << get<0>(str_ptr->getData()) << " and I am " << get<1>(str_ptr->getData())  << " y.o." << endl;

    // deallocate memory used by str_ptr in Heap memomry
    //
    delete str_ptr;

    return 0;
}


