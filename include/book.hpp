#pragma once
#include <string>
#include <iostream>

class Book
{
public:
    Book();
    Book(const char*);

    void set_book_name(const char*);
    std::string get_book_name();

private:
    std::string book_name;
};