#ifndef NODE
#define NODE

template <class T>
class Node
{          
    public:
        Node();
        Node(T);
        ~Node();
        
        Node *next;
        T elem;
        
        void print();    
};
template<typename T>
Node<T>::Node(){
    elem = NULL;
    next = NULL;
}

template<typename T>
Node<T>::Node(T elemento){
    elem = elemento;
    next = NULL;
}

template<typename T>
void Node<T>::print(){
    std::cout<<elem<<", ";
}


template<typename T>
Node<T>::~Node(){}
#endif // NODE_H