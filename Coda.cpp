#include <iostream>
#include <string>

using namespace std;

class Coda {

private:

    int size, start, stop;
    int * v;

public:

    Coda(int size){
        this->size = size;
        v = new int[size];
        for (int i=0; i<size; i++){
            v[i] = 0;
        }
        start = stop = 0;
    } 

    void enter(int val){
        if(stop >= size){cout << "coda piena!"<<endl; return;}
        v[stop] = val;
        stop ++;
    }

    int exit(){
        if(start >= stop ){
            cout<<" coda vuota!";
            return -1;
        }
        int val = v[start];
        start = start + 1;
        return val;
    }

    void stampa(){
        cout << endl;
        cout <<"Coda: " << endl;
        for(int i=start; i<stop; i++){
        cout << v[i] << endl; 
        } 
        cout <<"--------------" << endl;
        cout << endl;
    }

};