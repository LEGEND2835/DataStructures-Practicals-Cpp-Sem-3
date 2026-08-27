#include <iostream>
#include <string>
using namespace std;
const int MAX = 5;
string stack[MAX];
int top = -1;
bool isFull()
{
    return top == MAX - 1;
}
bool isEmpty()
{
    return top == -1;
}
void visitPage(string page)
{
    if (isFull())
        cout << "Stack Overflow!\n";
    else
    {
        stack[++top] = page;
        cout << "Visited: " << page << endl;
    }
}
void goBack()
{
    if (isEmpty())
        cout << "Stack Underflow!\n";
    else
    {
        cout << "Going back from: " << stack[top] << endl;
        top--;
    }
}
void showCurrentPage()
{
    if (isEmpty())
        cout << "History is empty!\n";
    else
        cout << "Current Page: " << stack[top] << endl;
}
void displayHistory()
{
    if (isEmpty())
        cout << "History is empty!\n";
    else
    {
        for (int i = top; i >= 0; i--)
            cout << stack[i] << endl;
    }
}
int main()
{
    int choice;
    string page;
    do
    {
        cout << "\n1. Visit New Page\n";
        cout << "2. Go Back\n";
        cout << "3. Show Current Page\n";
        cout << "4. Display Full History\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Enter page: ";
                cin >> page;
                visitPage(page);
                break;
            case 2:
                goBack();
                break;
            case 3:
                showCurrentPage();
                break;
            case 4:
                displayHistory();
                break;
            case 5:
                cout << "Exit";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    }
    while (choice != 5);
    return 0;
}