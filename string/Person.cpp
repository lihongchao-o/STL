
#include "Person.h"

#include <vector>


int main()
{
    Person<int, double, double> hchao("Hongchao-o", "Beijing");
    
    //cin >> hchao;
    //cout << hchao;    
    
    
    Person<int, double, double> * Persons[3] = {
        new Person<int, double, double> ("Hongchao-o", "Beijing"),
        new Person<int, double, double> ("hchao", "Beijingm"),
        new Person<int, double, double> ("Hongchao", "Beijingm")
    };
    
    
    vector<Person<int, double, double>> persons;
    persons.push_back( Person<int, double, double> ("Hongchao-o", "Beijing", 26, 78.8, 175.4) );
    persons.push_back( Person<int, double, double> ("hchao", "Beijingm", 27, 88.8, 180.2) );
    persons.push_back( Person<int, double, double> ("Hongchao", "Beijingm", 28, 98.8, 190.8) );
    
    cout << endl;
    
    vector< Person<int, double, double> >::iterator itr = persons.begin();
    while( itr != persons.end() ) {
        cout << *itr << "\n";
        ++itr;
    }
    
    
    return 0;
}
