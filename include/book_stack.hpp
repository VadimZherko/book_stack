#include "book.hpp"

class Node
{
public:
    Book value_;
    Node* p_next;
    
    Node(Book& book, Node* p_next = nullptr)
    {
        value_ = book;
        this->p_next = p_next;  
    }
};

class BookStack
{
public:
    BookStack();
    ~BookStack();

    void push(Book& book);
    Book pop();
    int length();
    
private:
    

    Node* head_;
    int size_;
};