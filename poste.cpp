#include <iostream>
#include <string>

using namespace std;

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