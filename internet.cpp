#include <iostream>
#include <string>
#include <queue>
#include <cctype>

using namespace std;

class Poste {
private:
    string servizio;
    int nR = 0, nS = 0, nF = 0;
    queue<int> cR; // Coda per la ricezione
    queue<int> cS; // Coda per la spedizione
    queue<int> cF; // Coda per le finanzarie

public:

    Poste() {}
    Poste(string servizio) {
        this->servizio = servizio;
        addClient(tolower(servizio[0]));
    }

    void addClient(char service) {
        switch (service) {
            case 's':
                cS.push(++nS);
                spedizione();
                break;
            case 'r':
                cR.push(++nR);
                ricezione();
                break;
            case 'f':
                cF.push(++nF);
                finanzarie();
                break;
            default:
                cout << "Servizio non disponibile" << endl;
                break;
        }
    }

    void spedizione() {
        cout << "Servizio di spedizione" << endl;
    }

    void ricezione() {
        cout << "Servizio di ricezione" << endl;
    }

    void finanzarie() {
        cout << "Servizio finanzarie" << endl;
    }

    void stampa() {
        cout << "Clienti in coda: " << endl;
        cout << "Ricezione: ";
        stampaCoda(cR);
        cout << "Spedizione: ";
        stampaCoda(cS);
        cout << "Finanzarie: ";
        stampaCoda(cF);
    }

    void stampaCoda(queue<int>& coda) {
        while (!coda.empty()) {
            cout << coda.front() << " ";
            coda.pop();
        }
        cout << endl;
    }
};

int main() {
    bool valido = true;
    char risposta;

    while (valido) {
        cout << "Benvenuto in Poste Italiane\n" << endl;
        cout << "Seleziona servizio [1-3]: " << endl;
        cout << "1. Spedizione (s)" << endl;
        cout << "2. Ricezione (r)" << endl;
        cout << "3. Finanzarie (f)" << "\n:";
        int scelta;
        cin >> scelta;

        Poste p;
        Poste p1;
        Poste p2;

        switch (scelta) {
            case 1:
                p = Poste("spedizione");
                p.stampa();
                break;
            case 2:
                p1 = Poste("ricezione");
                p1.stampa();
                break;
            case 3:
                p2 = Poste("finanzarie");
                p2.stampa();
                break;
            default:
                cout << "Servizio non disponibile" << endl;
                valido = false;
                break;
        }
        cout << "Vuoi continuare? [s/n]: ";
        cin >> risposta;
        if (tolower(risposta) == 'n'){
            valido = false;
        }
    }
    return 0;
}
