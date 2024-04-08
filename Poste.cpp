#include <iostream>
#include <string>

using namespace std;

class Poste {
private:
    string S; // spedizione
    int R; //ricezione
    int F; //finanzarie
    
public:
    Poste(string servizio){

        if (servizio == "spedizione"){
            spedizione();
        } else if (servizio == "ricezione"){
            ricezione();
        } else if (servizio == "finanzarie"){
            finanzarie();
        } else {
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

};