#include <iostream>

using namespace std;

class Coda {
private:
    int size, start, stop;
    int * v;

public:
    Coda(int size){
        this->size = size;
        v = new int [size];
        start = stop = 0;
    }

    void enter(int val){
        if(start == stop){
            cout << "Coda piena" << endl;
            return;
        }
        v[stop] = val;
        stop++;
    }

    int exit(){
        if (start >= stop){
            cout << "Coda vuota" << endl;
            return v[start++];
        }
        return -1;
    }

    void stampa(){
        for (int i = start; i < stop; i++){
            cout << v[i] << " ";
        }
        cout << "----------------------" << endl;
    }
};