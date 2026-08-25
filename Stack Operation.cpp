#include <iostream>
using namespace std;
int stack[1000];
int top = -1;
int n;
void push(int val)
{
    if (top >= n - 1)
        cout << "Stack Overflow" << endl;
    else
    {
        top++;
        stack[top] = val;
        cout << "Element pushed successfully." << endl;
    }
}
void pop()
{
    if (top <= -1)
        cout << "Stack Underflow" << endl;
    else
    {
        cout << "Popped element: " << stack[top] << endl;
        top--;
    }
}
void peek()
{
    if (top <= -1)
        cout << "Stack is empty." << endl;
    else
        cout << "Top element: " << stack[top] << endl;
}
void display()
{
    if (top <= -1)
        cout << "Stack is empty." << endl;
    else
    {
        cout << "Stack elements: " << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    }
}
int main()
{
    cout << "Enter the size of the stack: ";
    cin >> n;
    int choice;
    do
    {
        cout << "\n--- STACK MENU ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Close Stack" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                int val;             
                cout << "Enter the element to be pushed: ";             
                cin >> val;             
                push(val);
                break;
            }
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Stack closed." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while(choice != 5);
    return 0;
}