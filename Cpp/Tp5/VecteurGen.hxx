//template <typename T>
// VecteurGen<T>::VecteurGen(const VecteurGen& c1):capacite{c1.capacite},cursor{c1.cursor}
// {   
//     tab = new T[c1.capacite+1];
//     memcpy(tab, c1.tab,c1.capacite+1);
//     std::cout << "Constructeur de copie de Vecteur.\n";
// }
template <typename T>
VecteurGen<T>::VecteurGen(int capa):capacite{capa},tab{new T[capa+1]},cursor{0}
{
    tab[0] ='\0';
}
template <typename T>
VecteurGen<T>::~VecteurGen()
{

    delete [] tab;  
}
template <typename T>
int VecteurGen<T>::capacity() const
{
    return capacite;
}
template <typename T>
int VecteurGen<T>::size() const
{
    return cursor;
}
template <typename T>
void VecteurGen<T>::push_back(T a)
{
    if (cursor==capacite)
    {

        T *tab1 = new T[capacite*2];
        memcpy(tab1,tab,sizeof(T) * capacite);
        capacite= capacite *2;
        delete [] tab;
        tab = tab1;
        tab[cursor] = a;
    }
    else 
    {
        tab[cursor]=a;
    }
    cursor++;
}
template <typename T>
T VecteurGen<T>::operator[](int a) const
{
    if (a>=0 && a<cursor)
    {
        return tab[a];
    }
    else if (a>=cursor)
    {
         throw std::bad_alloc();
    }
    else 
    {
        throw VecteurGen<T>::OutOfRangeException();
    }
}
template <typename T>
VecteurGen<T> operator+(const VecteurGen<T> & a, const VecteurGen<T> & b) 
{
    VecteurGen<T> vecteur(a.capacite +b.capacite);
    int cursor = 0;
    for(int i = 0 ; i < a.cursor ; i++)
    {
        vecteur.tab[cursor]=a[i];
        cursor++;
    }
    for(int i = 0 ; i < b.cursor ; i++)
    {
        vecteur.tab[cursor]=b[i];
        cursor++;
    }
    vecteur.cursor = cursor ;
    return vecteur;

}

template <typename T>
T Approx(T x)
{
    int i = (int) x;
    x = (T) i;
    return x;
}
