#include <iostream>

using namespace std;

class Book {
    string title, author;
    int year;

public:
    Book(const string& t, const string& a, int y) : title(t), author(a), year(y) {}

    void displayInfo() const {
        cout << title << ", " << author << ", " << year << endl;
    }
};

int main() {
    Book library[] = {
        {"1984", "George Orwell", 1949},
        {"To Kill a Mockingbird", "Harper Lee", 1960},
        {"The Great Gatsby", "F. Scott Fitzgerald", 1925},
        {"Pride and Prejudice", "Jane Austen", 1813}
    };

    for (const auto& book : library)
        book.displayInfo();

    return 0;
}
