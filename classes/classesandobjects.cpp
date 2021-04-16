#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

int main() {

    Book book1;
    book1.title = "To Kill a Mockingbird";
    book1.author = "Harper Lee";
    book1.pages = 281;

    Book book2;
    book2.title = "Book2";
    book2.author = "Author 2";
    book2.pages = 697;

    Book book3;
    book3.title = "Book 3";
    book3.author = "Author 3";
    book3.pages = 349;

    cout << book3.pages;

    return 0;
}