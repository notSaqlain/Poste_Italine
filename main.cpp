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

    void enter(int val){
        if(start = stop){
            cout << "Coda piena" << endl;
            return;
        }
        v[stop] = val;
        stop++;
    }

    int exit(){
        if (start >= stop){
            cout << "Coda vuota" << endl;
            return v[start++];
        }
        return -1;
    }

    void stampa(){
        for (int i = start; i < stop; i++){
            cout << v[i] << " ";
        }
        cout << "----------------------" << endl;
    }
};



/*
class poste {
private:
    string S; // spedizione
    int R; //ricezione
    int F; //finanzarie
public:
    poste(string servizio){
        if (servizio == "spedizione"){
            
        } else if (servizio == "ricezione"){

        } else if (servizio == "finanzarie"){

        } else {
            cout << "Servizio non disponibile" << endl;
        }
    }

};
*/

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