#include "book.hpp"
#include "book_stack.hpp"
#include <iostream>

int main()
{
    BookStack pip;

    Book first("eto");
    Book second("Peacefull");
    Book third("World");

    auto book = new Book("cpp");

    pip.push(first);
    pip.push(second);
    pip.push(third);

    std::cout << pip.pop().get_book_name() << std::endl;
    std::cout << pip.pop().get_book_name() << std::endl;
    std::cout << pip.pop().get_book_name() << std::endl;

    try
    {
        std::cout<< pip.pop().get_book_name() << std::endl;
    }
    catch(const char* ex)
    {
        std::cout << "Exception: " << ex << std::endl;
    }

    std::cout << pip.length() << std::endl;

    return 0;
}