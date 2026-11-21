#include<iostream>
#include<string>
using namespace std;
// Queue for pending tasks
string queue[10];
int front = -1, rear = -1;
// Stack for completed tasks
string stack[10];
int top = -1;
// Function to check Queue is empty 
bool isEmpty()
{
    if(front == -1 || front > rear)
    {
        return true;
    }
    return false;
}
// Function to check Stack is empty
bool isStackEmpty()
{
    if(top == -1)
    {
        return true;
    }
    return false;
}
// Function to add task in Queue
void enQueue(string task)
{
    if(rear == 9)
    {
        cout << "Queue is Full" << endl;
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = task;
        cout << "Task Added Successfully!" << endl;
    }
}
// Function to remove task from Queue
string deQueue()
{
    string task;
    if(isEmpty())
    {
        cout << "No Pending Tasks" << endl;
        return "";
    }
    else
    {
        task = queue[front];
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
        return task;
    }
}
// Function to push completed task in Stack
void push(string task)
{
    if(top == 9)
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        top++;
        stack[top] = task;
    }
}
// Function to pop last completed task from Stack
string pop()
{
    string task;
    if(isStackEmpty())
    {
        cout << "No Completed Tasks" << endl;
        return "";
    }
    else
    {
        task = stack[top];
        top--;
        return task;
    }
}
// Function to display pending tasks
void displayPending()
{
    if(isEmpty())
    {
        cout << "No Pending Tasks" << endl;
    }
    else
    {
        cout << "\nPending Tasks:" << endl;
        for(int i = front; i <= rear; i++)
        {
            cout << queue[i] << endl;
        }
    }
}
// Function to display completed tasks 
void displayCompleted()
{
    if(isStackEmpty())
    {
        cout << "No Completed Tasks" << endl;
    }
    else
    {
        cout << "\nCompleted Tasks:" << endl;
        for(int i = top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    }
}
int main()
{
    int choice;
    string task;
    do
    {
        cout << "\n===== TO DO LIST =====" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. Complete Task" << endl;
        cout << "3. View Pending Tasks" << endl;
        cout << "4. View Completed Tasks" << endl;
        cout << "5. Undo Last Completion" << endl;
        cout << "6. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter Task: ";
                cin.ignore();
                getline(cin, task);
                enQueue(task);
                break;
            case 2:
                if(isEmpty())
                {
                    cout << "No Pending Tasks" << endl;
                }
                else if(top == 9)
                {
                    cout << "Completed Task Stack is Full" << endl;
                }
                else
                {
                    task = deQueue();
                    push(task);

                    cout << "Completed Task: "<< task << endl;
                }
                break;
            case 3:
                displayPending();
                break;
            case 4:
                displayCompleted();
                break;
            case 5:
                if(isStackEmpty())
                {
                    cout << "No Task to Undo" << endl;
                }
                else if(rear == 9)
                {
                    cout << "Queue is Full" << endl;
                }
                else
                {
                    task = pop();
                    enQueue(task);
                    cout << "Task Restored: " << task << endl;
                }
                break;
            case 6:
                cout << "Thank You!" << endl;
                break;
            default:
                cout << "Invalid Choice" << endl;
        }
    }
    while(choice != 6);
}
