#include <iostream>
using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
};
template <typename T>
class Stack
{
    Node<T> *top;
public:
    Stack()
    {
        top==NULL;
    }
    void push( T item);
    void pop();
    T Top();
};
template <typename T>
void Stack<T>::push(T item)
{
    if(top==NULL)
    {
        top=new Node<T> ;
        top->data=item;
        cout<< item<< " is pushed.\n";
    }
    else
    {
        Node<T> *temp=new Node<T>;
        temp->data=item;
        temp->next=top;
        top=temp;
        cout<< item<< " is pushed.\n";
    }
}
template <typename T>
void Stack<T>::pop()
{
    if(top==NULL)
    {
        cout<<" Stack is Empty.\n";
        return;
    }
    else
    {
        cout<<top->data<< " is popped.\n";
        Node<T> *temp=top;
        top=top->next;
        delete temp;
    }
}
template <typename T>
T Stack<T>::Top()
{
    if(top)
        return top->data;
    else
        cout<<" Stack is empty.\n";
}
int main()
{
    Stack<int> S;
    S.push(5);
    S.push(4);
    S.push(7);
    S.push(1);
    S.push(50);
    S.pop();
    S.pop();
    cout<<"Top element is "<<S.Top()<< "\n";
    S.push(9);
    cout<<"Top element is "<<S.Top()<< "\n";

    return 0;
}


