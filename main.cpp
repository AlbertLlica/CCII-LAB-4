#include <iostream>
#include "Node.h"
#include "Linkedlist.h"
 
int main()
{
    LinkedList<int> lista1;

    lista1.insert(1);
    lista1.insert(2);
    lista1.insert(3);
    lista1.insert(4);
    lista1.print();
    lista1.remove(2);
    lista1.print();

    
    return 0;
}