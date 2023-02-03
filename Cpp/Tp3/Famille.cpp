#include <iostream>
#include "Bavarde.hpp"
#include "Famille.hpp"
Famille::Famille(int a):taille{a}
{
    tab = new Bavarde[taille];
}
Famille::Famille()
{
    Famille(5);
}
Famille::~Famille()
{
    if (tab)
    {
        delete [] tab;
    }
}