#include <iostream>
#include "Bavarde.hpp"

Bavarde::Bavarde(int v):n{v}
{
    std::cout << "création de " << n << std::endl;
}
Bavarde::~Bavarde() 
{
    std::cout << "Tais-toi " << n << std::endl;
}
int Bavarde::get()
{
    return n;
} 
void Bavarde::Set(int a)
{
    n = a;
}
void Bavarde::afficher()
{
    std::cout << "affichage de " << n << std::endl;
}