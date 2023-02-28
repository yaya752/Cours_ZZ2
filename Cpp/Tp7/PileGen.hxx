#include "PileGen.hpp"
template<typename T>
bool PileGen<T>::empty() const
{
    return cursor==0;
}
template<typename T>
int PileGen<T>::size()const
{
    return cursor;
}
template<typename T>
PileGen<T>::PileGen(int a):taille{a}
{ 
    if (a<=0)
    {
        throw std::invalid_argument("la pile doit être initialisé correctement");
    }
    pile = new int[taille];
}
template<typename T>
void PileGen<T>::pop()
{

    if(cursor > 0)
    {
        cursor--;
    }
    else
    {
        throw std::invalid_argument("pile vide");
    }
    
}
template<typename T>
const T& PileGen<T>::top() const
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
template<typename T>
void PileGen<T>::push(int x)
{
    if(cursor < taille)
    {
        pile[cursor] = x;
        cursor++;
    }
    else
    {
        throw std::invalid_argument("pile pleine");
    }
    
}
template<typename T>
PileGen<T>::~PileGen(){}
