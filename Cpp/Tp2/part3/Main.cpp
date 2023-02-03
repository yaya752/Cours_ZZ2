class Tableau 
{
  public:
    int taille;
    int * tab;


 public:
    Tableau():taille(10), tab(new int[taille]) 
    { 
      // si problème ?
    }
    ~Tableau()
    {
        delete[] tab;
    }

};

int main(int, char **)
{
   Tableau t;
   //t.tab[0]=42;
   return 0;
}