#ifdef _NODO_
#define _NODO_


class Node {

    public:
        Node();
        Node(int elemento)
        ~Node();

        Node *next;
        int elem;
        
};

Node :: Node(){
    elem = NULL;
    next = NULL;
}

Node :: Node(int elemento){
    elem = elemento;
    next = NULL;
}
Node ::  ~Node() {};
#endif