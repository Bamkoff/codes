#include <iostream>
#include <stdlib.h>
using namespace std;

class Node
{
    int liczba;
    Node *next;
public:
    Node (int i) { liczba = i; next = NULL;}
    int Liczba () { return liczba; }
    Node *Next () { return next; }
    void changeNext (Node *n) { next = n; }
};

class Queue
{
    Node *Q;
    Node *last;
public:
    Queue () { Q = NULL; last = NULL; }
    ~Queue ();
    void addNode (int i);    //dodaje element do kolejki
    int returnFront ();      //zwraca pierwszy element kolejki
    int removeNode ();       //usuwa element z kolejki
    bool isEmpty ();         //sprawdza, czy kolejka jest pusta
    void printQueue ();      //wypisuje elementy kolejki
};

Queue::~Queue (){
    Node *q;
    while (!isEmpty())
    {
        q = Q;
        Q = Q -> Next();
        delete q;
    }
}
void Queue::addNode (int i){    //dodaje element do kolejki (na koniec)
    Node *q;
    q = new Node (i);
    if (Q != NULL) last -> changeNext (q);
    else Q = q;
    last = q;
}
int Queue::returnFront (){      //zwraca pierwszy element kolejki
    return Q -> Liczba();
}
int Queue::removeNode (){       //usuwa element z kolejki (z pocz¹tku)
    int liczba;
    Node *q;
    q = Q;
    if (Q != last) Q = Q -> Next();
    else
    {
        Q = NULL;
        last = NULL;
    }
    liczba = q -> Liczba();
    delete q;
    return liczba;
}
bool Queue::isEmpty (){         //sprawdza, czy kolejka jest pusta
    if (Q == NULL) return 1;
       else return 0;
}
void Queue::printQueue (){      //wypisuje elementy kolejki
    Queue temp;
    int l;
    while (!isEmpty())
    {
        l = removeNode();
        temp.addNode (l);
    }
    cout << "\n\nElementy kolejki:\n";
    while (!temp.isEmpty())
    {
        l = temp.removeNode();
        cout << l << endl;
        addNode (l);
    }
}

int main ()
{
    Queue kolejka;
    int wybor, liczba;
    do
    {
        cout << "***********\n";
        cout << "* Kolejka *\n";
        cout << "***********\n";
        cout << "\n\n1 - dodaj element\n";
        cout << "2 - wypisz elementy kolejki\n";
        cout << "3 - zdejmij element\n";
        cout << "0 - wyjscie z programu\n";
        cout << "Twoj wybor:\t";
        cin >> wybor;
        switch (wybor)
        {
                case 1:      cout << "\n\nPodaj liczbe:\t";
                             cin >> liczba;
                             kolejka.addNode (liczba);
                             break;
                case 2:      if (!kolejka.isEmpty()) kolejka.printQueue();
                             else cout << "\n\nKolejka jest pusta\n";
                             system ("PAUSE");
                             break;
                case 3:      if (!kolejka.isEmpty())
                             {
                                  liczba = kolejka.removeNode();
                                  cout << "\n\nUsunieta zostala liczba:\t" << liczba << endl;
                             }
                             else cout << "\n\nKolejka jest pusta\n";
                             system ("PAUSE");
                             break;
        }
        system ("CLS");
    }
    while (wybor != 0);
    return 0;
}

