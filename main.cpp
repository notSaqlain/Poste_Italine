#include <iostream>
#include <string>
#include "Coda.cpp"

using namespace std;

int main() {
    
    Coda c = Coda(1000);

    c.stampa();
    c.enter(120);
    c.enter(55);
    c.enter(355);
    c.exit();
    c.enter(5);
    c.stampa();

    return 0;
}