#include "book.hpp"

Book::Book()
{

}

Book::Book(const char* book_name)
{
    this->book_name = book_name; 
}

void Book::set_book_name(const char* book_name)
{
    this->book_name = book_name;
}

std::string Book::get_book_name()
{
    return book_name;
}