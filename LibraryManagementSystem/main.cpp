#include "Library.h"

int main()
{
    Library library;
    int choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. View Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            library.addBook();
            break;
        case 2:
            library.viewBooks();
            break;
        case 3:
            library.searchBook();
            break;
        case 4:
            library.issueBook();
            break;
        case 5:
            library.returnBook();
            break;
        case 6:
            cout << "Thank You!\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}