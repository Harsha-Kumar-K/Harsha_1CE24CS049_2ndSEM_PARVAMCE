#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    bool isAvailable;

public:
    // Set the book details and mark as available
    void setBookDetails(string t, string a) {
        title = t;
        author = a;
        isAvailable = true;
    }

    // Check out the book (only if available)
    void checkoutBook() {
        if (isAvailable) {
            isAvailable = false;
            cout << "Book checked out successfully." << endl;
        } else {
            cout << "Book is already checked out." << endl;
        }
    }

    // Return the book (mark as available)
    void returnBook() {
        isAvailable = true;
        cout << "Book returned successfully." << endl;
    }

    // Show book details and availability status
    void showStatus() const {
        cout << "\nBook Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Availability: " << (isAvailable ? "Available" : "Not Available") << endl;
    }
};


    Book b1;int main() {

    b1.setBookDetails("The Alchemist", "Paulo Coelho");
    b1.showStatus();

    b1.checkoutBook();
    b1.showStatus();

    b1.returnBook();
    b1.showStatus();

    return 0;
}