#include<iostream>
#include<string>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;
    void display(){
        cout << "Bookid: " << bookid << " title: "<< title << " price: " << price << endl;
    }
    Book inputBook()
    {
        cout << "Enter bookid, title ,price of your book: ";
        cin >> bookid;
        cin.ignore();
        cin.getline(title,20);
        cin >> price;
    }
};
int main()
{
    Book b1;
    b1.inputBook();
    b1.display();
}
