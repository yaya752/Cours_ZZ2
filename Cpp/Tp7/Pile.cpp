#include "Pile.hpp"
int Pile::empty() const
{
    return vide;
}
int Pile::size()const
{
    return cursor;
}
Pile::Pile():vide{1},taille{0},pile{nullptr}
{  
}
Pile::Pile(int a):vide{1},taille{a}
{ 
    if (a<=0)
    {
        throw std::invalid_argument("la pile doit être initialisé correctement");
    }
    pile = new int[taille];
}
void Pile::pop()
{

    if(cursor > 0)
    {
        cursor--;
        if (cursor == 0)
        {
            vide = 1;
        }
    }
    else
    {
        throw std::invalid_argument("pile vide");
    }
    
}
int Pile::top() const
{

    if(cursor > 0)
    {
        return pile[cursor-1];
    }
    else
    {
        throw std::invalid_argument("pile vide");
    }
    
}
void Pile::push(int x)
{
    if(cursor < taille)
    {
        pile[cursor] = x;
        cursor++;
        vide = 0;
    }
    else
    {
        throw std::invalid_argument("pile pleine");
    }
    
}
Pile::~Pile(){}