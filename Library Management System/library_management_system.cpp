#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Library
{
public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

int main()
{
    Library lib[20];

    int input = 0;
    int count = 0;

    while (input != 3)
    {
        cout << "Enter 1 to input details like id, name, author, student, price, pages " << endl;
        cout << "Enter 2 to Display Details " << endl;

        cout << "Enter 3 to quit" << endl;

        cin >> input;

        switch (input)
        {
        case 1:
        start:
            cout << "Enter Book id : " << endl;
            cin >> lib[count].id;

            cout << "Enter Book Name : " << endl;
            cin >> lib[count].name;
            // cin.getline(lib[count].name, 100, '$');

            cout << "Enter Book Author : " << endl;
            cin >> lib[count].author;
            // cin.getline(lib[count].author, 100, '$');

            cout << "Enter Student Name : " << endl;
            cin >> lib[count].student;
            // cin.getline(lib[count].student, 100, '$');

            cout << "Enter Book Price : " << endl;
            cin >> lib[count].price;

            cout << "Enter Book Pages : " << endl;
            cin >> lib[count].pages;

            count++;
            break;

        case 2:
            for (int i = 0; i < count; i++)
            {
                cout << "Book id is : " << lib[i].id << endl;
                cout << "Book Name is : " << lib[i].name << endl;
                cout << "Book Author is : " << lib[i].author << endl;
                cout << "Student Name is : " << lib[i].student << endl;
                cout << "Book Price is : " << lib[i].price << endl;
                cout << "Book Pages Count is : " << lib[i].pages << endl;
            }
            break;
        case 3:
            exit(0);
            break;

        default:
            cout << "You have Entered Wrong Value, pls type again!" << endl;
            goto start;
            break;
        }
    }
}
