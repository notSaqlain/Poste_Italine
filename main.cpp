#include <iostream>
#include <string>
#include "Coda.cpp"
#include "Poste.cpp"

using namespace std;

int main() {
    cout << "Benvenuto in Poste Italiane\n" << endl;
    cout << "Seleziona servizio [1-3]: " << endl;
    cout << "1. Spedizione (s)" << endl;
    cout << "2. Ricezione (r)" << endl;
    cout << "3. Finanzarie (f)" << "\n:";
    int servizio;
    cin >> servizio;

    switch (servizio) {
    case 1:
        Poste("spedizione");
        break;
    case 2:
        Poste("ricezione");
        break;
    case 3:
        Poste("finanzarie");
        break;
    default:
        cout << "Servizio non disponibile" << endl;
        break;
    }

    

    return 0;
}