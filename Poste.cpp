#include <iostream>
#include <string>

using namespace std;

class Poste {
private:
    string S; // spedizione
    int R; //ricezione
    int F; //finanzarie
    Coda c = Coda(1000);
    
public:
    Poste(string servizio){

        if (servizio == "spedizione"){
            c.enter(1);
            c.stampa();
            spedizione();
        } else if (servizio == "ricezione"){
            c.enter(1);
            c.stampa();
            ricezione();
        } else if (servizio == "finanzarie"){
            c.enter(1);
            c.stampa();
            finanzarie();
        } else {
            c.enter(1);
            c.stampa();
            cout << "Servizio non disponibile" << endl;
        }
        c.exit();
        c.stampa();
    }

    void spedizione(){
        cout << "Servizio di spedizione" << endl;
    }

    void ricezione(){
        cout << "Servizio di ricezione" << endl;
    }

    void finanzarie(){
        cout << "Servizio finanzarie" << endl;
    }

};