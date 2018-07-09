#include <iostream>
#include <stdlib.h>
using namespace std;

class Node
{
        int liczba;
        Node *next;    
    public:
        Node (int i) { liczba = i; next = NULL; }
        int Liczba () { return liczba; }
        Node * Next () { return next; }
        void changeNext (Node *n) { next = n; }
};

class List
{
        Node *L;
    public:
        List () { L = NULL; }
        ~List () { removeallNode (); }
        bool emptyList ();             // zwraca 1, jesli lista jest pusta
        void addNode (Node *n);        //dodaje wierzcho³ek n na pocz¹tek listy
        void printNode ();             //drukuje listê   
        void removeNode (Node *n);     //usuwa wierzcho³ek    
        void removeallNode ();         //usuwa ca³¹ listê
        Node *locateNode (int i);      //zwraca wskaŸnik do wierzcho³ka zawieraj¹cego wartoœæ i 
};

bool List::emptyList (){               // zwraca 1, jesli lista jest pusta
    if (L == NULL) return 1;
    else return 0;
}
void List::addNode (Node *n){          //dodaje wierzcho³ek n na pocz¹tek listy
    n -> changeNext (L);
    L = n;
}
void List::printNode (){               //drukuje listê   
    Node *q;
    q = L;
    while (q != NULL)
    {
        cout << q -> Liczba() << endl;
        q = q -> Next();
    }
}
void List::removeNode (Node *n){       //usuwa wierzcho³ek
    if (L == n)
    {
        L = L -> Next();
        delete n;
    }
    else {
        Node *q;
        q = L;
        while ((q -> Next() != NULL) && (q -> Next() != n)) q = q -> Next();    
        if (q -> Next() == n)
        {
             q -> changeNext (q -> Next() -> Next());
             delete n;   
        }
    }    
}
void List::removeallNode (){           //usuwa ca³¹ listê
    Node *q;
    while (L != NULL)
    {
        q = L;
        L = L -> Next ();
        delete q;
    }
}
Node *List::locateNode (int i){         //zwraca wskaŸnik do wierzcho³ka zawieraj¹cego wartoœæ i 
    Node *q;
    q = L;
    while ((q != NULL) && (q -> Liczba() != i)) q = q -> Next ();
    return q;
}

int main ()
{
    int wybor, liczba;
    List lista;
    do
    {
        cout << "****************************\n";
        cout << "* Lista pojedynczo wiazana *\n";
        cout << "****************************\n";
        cout << "\n\n1 - dodawanie liczby do listy\n";
        cout << "2 - drukowanie listy\n";
        cout << "3 - usuwanie liczby z listy\n";
        cout << "4 - usuwanie wszystkich liczb\n";
        cout << "5 - szukanie liczby\n";
        cout << "0 - wyjscie z programu\n";
        cout << "Twoj wybor?\t";
        cin >> wybor;
        switch (wybor)
        {
              case 1:       cout << "\n\nPodaj liczbe:\t";
                            cin >> liczba;
                            Node *q;
                            q = new Node (liczba);
                            lista.addNode(q);  
                            break;
              case 2:       if (!lista.emptyList())
                            {
                                 cout << "\n\nNa liscie sa:\n";
                                 lista.printNode(); 
                            }     
                            else cout << "\n\nLista pusta\n";      
                            system ("PAUSE");                     
                            break;
              case 3:       cout << "\n\nPodaj liczbe:\t";
                            cin >> liczba;
                            Node *r;
                            r = lista.locateNode(liczba);
                            if (r) lista.removeNode(r);
                            else cout << "\n\nNie ma takiej liczby na liscie\n";
                            system ("PAUSE");                     
                            break;
              case 4:       lista.removeallNode();
                            break;
              case 5:       cout << "\n\nPodaj liczbe:\t";
                            cin >> liczba;
                            Node *s;
                            s = lista.locateNode(liczba);
                            if (s) cout << "Liczba jest na liscie\n";
                            else cout << "Liczby nie ma na liscie\n";
                            system ("PAUSE");                     
                            break;
        }
        system ("CLS");
    }
    while (wybor != 0);
    return 0;
}

