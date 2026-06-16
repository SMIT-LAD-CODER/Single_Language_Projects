#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Book
{
public:
    int id;
    string title;
    string author;
    bool issued;
};

class Library
{
public:
    void addBook();
    void viewBooks();
    void searchBook();
    void issueBook();
    void returnBook();
};

#endif