#include <iostream>
#include <string>

using namespace std;

class Coda {
private:
    int size, start, stop;
    int * v;
    
public:
    Coda(int size){
        this->size = size;
        v = new int [size];
        start = stop = 0;
    }
};

class poste {
private:
    string S; // spedizione
    int R; //ricezione
    int F; //finanzarie
    int codaS[100];
    int codaR[100];
    int codaF[100];

public:
    poste(string servizio){

    }

};

int main() {
    

    return 0;
}