#include <iostream>
#include <string>
#include "Coda.cpp"

using namespace std;

class Poste {
private:
    string servizio;
    int nR = 0, nS = 0, nF = 0;
    /*
    string S; // spedizione
    int R; //ricezione
    int F; //finanzarie
    */
    
public:
    Poste(string servizio){

        this->servizio = servizio;

        Coda cR = Coda(1000, "ricezione");
        Coda cS = Coda(1000, "spedizione");
        Coda cF = Coda(1000, "finanzarie");

    }

    int Client(char service){
        switch (service)
        {
        case 's':
            cR.enter(++nR);
            spedizione();
            return cR.exit();
        case 'r':
            cS.enter(++nS);
            ricezione();
            return cS.exit();
        case 'f':
            cF.enter(++nF);
            finanzarie();
            return cF.exit();
        default:
            cout << "Servizio non disponibile" << endl;
        }

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

    void stampa(){
        cout << "Servizio di " << servizio << endl;
        cout << "Clienti in coda: " << endl;
        cout << "Ricezione: ";
        cR.stampa();
        cout << "Spedizione: ";
        cS.stampa();
        cout << "Finanzarie: ";
        cF.stampa();
    }

};