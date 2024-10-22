#include "book_stack.hpp"


BookStack::BookStack()
{
    head_ = nullptr;
    size_ = 0;
}

BookStack::~BookStack()
{
    while(head_)
    {
        this->pop();
    }
}

void BookStack::push(Book& book)
{
    auto node = new Node(book);
    node->p_next = head_;
    head_ = node;
    size_++;
}

Book BookStack::pop()
{
    if (size_ == 0)
    {
        throw "Book stack is empty";
    }
    else if (size_ == 1)
    {
        auto buffer = head_->value_;
        delete head_;
        head_ = nullptr;
        size_--;

        return buffer;
    }
    else
    {
        auto buffer = head_->value_;
        delete head_;
        head_ = head_->p_next;
        size_--;
        return buffer;
    }
}

int BookStack::length()
{
    return size_;
}
