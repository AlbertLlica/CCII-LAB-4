#ifdef _LIST_
#define _LIST_
#include "Node.h"

class LinkedList {
    private:
        int size;
        int Node *head;
    public:
        LinkedList();
        void insert(int elem );
        void remove(int pos);
        bool search(int elem);
        void print();

        ~LinkedList();
};

LinkedList :: LinkedList (){
    size = 0;
    head = NULL;
}

void LinkedList :: insert(int elem){
    int *nuevo = new int (elemento);
    int *aux = head;
    if(!head){
        head = nuevo;
    }
    else{
        if(head ->elem > elemento){
            nuevo -> next = head;
            head = nuevo;
        }
        else{
            while ((aux -> next != NULL) && (aux -> next-> elem <elemento)){
                aux = aux ->next;
            }
            nuevo -> next = aux -> next;
            aux -> next = nuevo;
        }
    }
    size++;
}

void LinkedList::remove(int pos){
    int *temp= head;
    int *temp1= temp->next;

    if{
        for(int i=2; i<=pos;i++){
            if(i==pos){
                int*aux= temp1;
                temp->next =temp1->next;
                delete aux;
                size--;
            }
            temp= temp->next;
            temp1=temp1->next;
        }
    }
}

void LinkedList :: print(){
    int *aux = head;
    if(!head){
        std::cout<<"Lista vacía "<<endl;
    }else{
        while(aux){
            aux->print();
            if(!aux->next){ 
                std::cout<<"NULL";
                aux = aux->next;
            }
        }
    }
    
}
LinkedList :: ~LinkedList(){}
#endif