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

class Stack
{
    Node *S;
public:
    Stack () { S = NULL; }
    ~Stack ();
    void addNode (int i);    //dodaje element na stos
    int removeNode ();       //usuwa element ze stosu
    int returnTop ();        //zwraca wartoœæ z wierzcho³ka stosu
    bool isEmpty ();         //sprawdza, czy stos jest pusty
    void printStack ();      //wypisuje elementy stosu
};

Stack::~Stack (){
    Node *q;
    while (!isEmpty())
    {
        q = S;
        S = S -> Next();
        delete q;
    }
}
void Stack::addNode (int i){    //dodaje element na stos
    Node *q;
    q = new Node (i);
    q -> changeNext (S);
    S = q;
}
int Stack::removeNode (){       //usuwa element ze stosu
    int liczba;
    Node *q;
    q = S;
    liczba = q -> Liczba();
    S = S -> Next ();
    delete q;
    return liczba;
}
int Stack::returnTop (){        //zwraca wartoœæ z wierzcho³ka stosu
    return S -> Liczba();
}
bool Stack::isEmpty (){         //sprawdza, czy stos jest pusty
    if (S == NULL) return 1;
        else return 0;
}
void Stack::printStack (){      //wypisuje elementy stosu
    Stack temp;
    int l;
    while (!isEmpty())
    {
        l = removeNode();
        temp.addNode (l);
    }
    cout << "\n\nElementy stosu:\n";
    while (!temp.isEmpty())
    {
        l = temp.removeNode();
        cout << l << endl;
        addNode (l);
    }
}

int main ()
{
    Stack stos;
    int wybor, liczba;
    do
    {
        cout << "********\n";
        cout << "* Stos *\n";
        cout << "********\n";
        cout << "\n\n1 - dodaj element\n";
        cout << "2 - wypisz elementy stosu\n";
        cout << "3 - zdejmij element\n";
        cout << "4 - wypisz wierzcho³ek stosu\n";
        cout << "0 - wyjscie z programu\n";
        cout << "Twoj wybor:\t";
        cin >> wybor;
        switch (wybor)
        {
                case 1:      cout << "\n\nPodaj liczbe:\t";
                             cin >> liczba;
                             stos.addNode (liczba);
                             break;
                case 2:      if (!stos.isEmpty()) stos.printStack();
                             else cout << "\n\nStos jest pusty\n";
                             system ("PAUSE");
                             break;
                case 3:      if (!stos.isEmpty())
                             {
                                  liczba = stos.removeNode();
                                  cout << "\n\nUsunieta zostala liczba:\t" << liczba << endl;
                             }
                             else cout << "\n\nStos jest pusty\n";
                             system ("PAUSE");
                             break;
                case 4:      if (!stos.isEmpty()) cout << "\n\nWierzcholkiem stosu jest wartosc:\t" << stos.returnTop() << endl;
                             else cout << "\n\nStos jest pusty\n";
                             system ("PAUSE");
                             break;
        }
        system ("CLS");
    }
    while (wybor != 0);
    return 0;
}

