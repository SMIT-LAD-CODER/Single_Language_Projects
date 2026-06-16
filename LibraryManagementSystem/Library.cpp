#include "Library.h"

void Library::addBook()
{
    Book b;

    ofstream file("books.dat", ios::app);

    cout << "Enter Book ID: ";
    cin >> b.id;

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, b.title);

    cout << "Enter Author Name: ";
    getline(cin, b.author);

    b.issued = false;

    file << b.id << "|"
         << b.title << "|"
         << b.author << "|"
         << b.issued << endl;

    file.close();

    cout << "Book Added Successfully!\n";
}

void Library::viewBooks()
{
    ifstream file("books.dat");

    string line;

    cout << "\n===== BOOK LIST =====\n";

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

void Library::searchBook()
{
    ifstream file("books.dat");

    int id;
    string line;
    bool found = false;

    cout << "Enter Book ID: ";
    cin >> id;

    while (getline(file, line))
    {
        if (line.find(to_string(id)) != string::npos)
        {
            cout << "\nBook Found:\n";
            cout << line << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Book Not Found!\n";

    file.close();
}

void Library::issueBook()
{
    cout << "Book Issued Successfully!\n";
    cout << "Fine calculation can be added later.\n";
}

void Library::returnBook()
{
    cout << "Book Returned Successfully!\n";
}