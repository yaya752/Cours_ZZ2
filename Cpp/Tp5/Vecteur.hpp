#ifndef CPP5__VECTEUR
#define CPP5__VECTEUR
#include <iostream>
#include <fstream>

class Vecteur {
    public:
        int capacite;
        float* tab;
        int cursor = 0;
    
    public:
        Vecteur(int capa =10);
        Vecteur(const Vecteur& c1);
        ~Vecteur();
        
    public:
        int capacity() const;
        int size() const;
        void push_back(float a);
        float operator[](int a) const;
    public:
    class OutOfRangeException{};
};
float Approx(float x);
#endif