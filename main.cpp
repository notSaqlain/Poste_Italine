#include <iostream>
#include <string>

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