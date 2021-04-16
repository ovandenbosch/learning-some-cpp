#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        // Constructor
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main() {

    Book book1("To kill a mockingbird", "Harper Lee", 281);
    Book book2("Book2", "Author 2", 396);
    Book book3("Book 3", "Author 3", 304);

    /* Without constructors (very long)
    Book book2("Book 2");
    book2.title = "Book2";
    book2.author = "Author 2";
    book2.pages = 697;

    Book book3("Book 3");
    book3.title = "Book 3";
    book3.author = "Author 3";
    book3.pages = 349;
    */

    cout << book1.title;

    return 0;
}