#ifndef CPP5__VECTEURGEN
#define CPP5__VECTEURGEN
#include <iostream>
#include <fstream>
template <typename T>
class VecteurGen {
    private:
        int capacite;
        T* tab;
        int cursor = 0;
    
    public:
        VecteurGen(int capa =10);
        VecteurGen(const VecteurGen& c1);
        ~VecteurGen();
        
    public:
        int capacity() const;
        int size() const;
        void push_back(T a);
        T operator[](int a) const;
    public:
    class OutOfRangeException{};
};
template <typename T>
T Approx(T x);
#include "VecteurGen.hxx"
#endif