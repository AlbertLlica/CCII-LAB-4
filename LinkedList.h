#ifndef LINKEDLIST
#define LINKEDLIST
#include "node.h"
 
template <class T>
class LinkedList{
	int size;
	Node<T> *head;
	public:
		LinkedList();
		~LinkedList();
		void insert(T);
		void remove(int);
		void print();
};

template<typename T>
LinkedList<T>::LinkedList(){
    size=0;
    head=NULL;
}

template<typename T>
void LinkedList<T>::insert(T elemento){
    Node<T> *nuevo = new Node<T> (elemento);
    Node<T> *temporal = head;
    if (!head){
        head=nuevo;
    }else{
        if(head->elem > elemento){
            nuevo->next = head;
            head = nuevo;
        }else{
            while((temporal->next !=NULL)&&(temporal->next->elem < elemento)){
                temporal = temporal->next;
            }
            nuevo->next = temporal->next;
            temporal->next = nuevo;
        }
    }
    size++;
}

template<typename T>
void LinkedList<T>::remove(int pos){
    Node<T> *temporal= head;
    Node<T> *temporal1= temporal->next;
    if (pos == 1) head = temporal->next;
    else {
        for(int i=2; i<=pos;i++){
            if(i==pos){
                Node<T> *aux= temporal1;
                temporal->next = temporal1->next;
                delete aux;
                size--;
            }
        temporal= temporal->next;
        temporal1=temporal1->next;
        }
    }

}

template<typename T>
void LinkedList<T>::print(){
    Node<T> *temporal = head;
    if(!head){
        std::cout<<"LISTA VACIA\n";
    }else{
        while(temporal){
            temporal->print();
                temporal=temporal->next;
        }
    }
    std::cout<<"\n";
}

template<typename T>
LinkedList<T>::~LinkedList(){}

#endif 