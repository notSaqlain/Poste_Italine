#include <iostream>
#include <string>
#include "Coda.cpp"
#include "poste.cpp"

using namespace std;

int main() {
    cout << "Benvenuto in Poste Italiane\n" << endl;
    int persone = 0;
    cout << "Inserisci il numero di persone in coda: ";
    cin >> persone;
    Coda c = Coda(persone);
    c.stampa();
    for (int i=0; i<persone; i++){
        c.enter(i);
    }
    c.stampa();

    while(){
        
        cout << "Seleziona servizio [1-3]: " << endl;
        cout << "1. Spedizione" << endl;
        cout << "2. Ricezione" << endl;
        cout << "3. Finanzarie" << "\n:";
        int servizio;
        cin >> servizio;

        if (servizio == 1){
            poste p = poste("spedizione");
        } else if (servizio == 2){
            poste p = poste("ricezione");
        } else if (servizio == 3){
            poste p = poste("finanzarie");
        } else {
            cout << "Servizio non disponibile" << endl;
        }

    }

    return 0;
}