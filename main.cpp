#include <iostream>
#include <string>
#include "Coda.cpp"
#include "Poste.cpp"

using namespace std;

int main() {
    cout << "Benvenuto in Poste Italiane\n" << endl;
    int persone = 0;
    cout << "Inserisci il numero di persone in coda: ";
    cin >> persone;
    //Coda c = Coda(persone);
    //c.stampa();
    for (int i=0; i<persone; i++){
        //c.enter(i);
    }
    //c.stampa();

    while(true){

        cout << "Seleziona servizio [1-3]: " << endl;
        cout << "1. Spedizione" << endl;
        cout << "2. Ricezione" << endl;
        cout << "3. Finanzarie" << "\n:";
        int servizio;
        cin >> servizio;

        if (servizio == 1){
            c.enter(1);
            c.stampa();
            Poste p = Poste("spedizione");
        } else if (servizio == 2){
            c.enter(1);
            c.stampa();
            Poste p = Poste("ricezione");
        } else if (servizio == 3){
            c.enter(1);
            c.stampa();
            Poste p = Poste("finanzarie");
        } else {
            c.enter(1);
            c.stampa();
            cout << "Servizio non disponibile" << endl;
        }
        c.exit();
        c.stampa();

    }

    return 0;
}