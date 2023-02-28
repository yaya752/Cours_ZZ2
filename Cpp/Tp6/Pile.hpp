#ifndef _PILE
#define _PILE
#include <iostream>
#include <fstream>
class Pile {
    public:
        int taille;
        int * pile;
        int cursor = 0;
    public:
        int empty()const ;
        int size() const;
        Pile(int a = 256);
        ~Pile();
        void pop();
        void push(int x);
        int top() const;
};

#endif
