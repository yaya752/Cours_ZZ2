#ifndef _PILEGEN
#define _PILEGEN
#include <iostream>
#include <fstream>
template<typename T>
class PileGen {
    public:
        int taille;
        T * pile;
        int cursor = 0;
    public:
        bool empty()const ;
        int size() const;
        PileGen(int a = 256);
        ~PileGen();
        void pop();
        void push(int x);
        const T& top() const;
};
#include "PileGen.hxx"
#endif
