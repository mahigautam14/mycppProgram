#include<iostream>
#include<string>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;
};
struct Book inputBook()
{
    struct Book b;
    cout<<"Enter bookid, title ,price of your book: ";
    cin>>b.bookid;
    cin.ignore();
    cin.getline(b.title,20);
    cin>>b.price;
    return b;
}
void display(struct Book b){
    cout<<"Bookid: "<<b.bookid<<" title: "<<b.title<<" price: "<<b.price<<endl;
}

int main()
{
    struct Book b1;
    b1 = inputBook();
    display(b1);
}