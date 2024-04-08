#include <iostream>
#include <string>

using namespace std;

class poste {
private:
    string S; // spedizione
    int R; //ricezione
    int F; //finanzarie
    Coda c = Coda(1000);
    int count = 0;
    
public:
    poste(string servizio){

        if (servizio == "spedizione"){
            spedizione();
        } else if (servizio == "ricezione"){
            ricezione();
        } else if (servizio == "finanzarie"){
            finanzarie();
        } else {
            cout << "Servizio non disponibile" << endl;
        }
        c.exit();
    }

    void spedizione(){
        cout << "Servizio di spedizione" << endl;
        // verra chiamato la prossima persona in coda

    }

    void ricezione(){
        cout << "Servizio di ricezione" << endl;
    }

    void finanzarie(){
        cout << "Servizio finanzarie" << endl;
    }

};