#ifndef TPQUEUE_H
#define TPQUEUE_H

struct SYM {
    char ch;
    int prior;
};

template <typename T>
class TPQueue {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& value);
    };
    
    Node* head;

public:
    TPQueue();
    ~TPQueue();
    
    void push(const T& value);
    T pop();
    bool isEmpty() const;
};

#endif 
