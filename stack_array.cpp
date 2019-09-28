/* C++ program to implement basic stack
operations */
#include <iostream>

using namespace std;

#define MAX 100

class Stack {
    int a[MAX]; // Maximum size of Stack
    int top;
public:
	Stack() { top = -1; }
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
	bool isFull();
	void display();
};
void Stack::display()
{
   if(top>=0) {
      cout<<"Stack elements are:\t";
      for(int i=top; i>=0; i--)
         cout<<a[i]<<" ";
         cout<<endl;
   } else
      cout<<"Stack is empty.\n";
}

bool Stack::push(int x)
{
	if (isFull()) {
		cout << "Stack Overflow.\n";
		return false;
	}
	else {
		a[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}

int Stack::pop()
{
	if (isEmpty()) {
		cout << "Stack Underflow.\n";
		return 0;
	}
	else {
		return a[top--];
	}
}
int Stack::peek()
{
	if (top < 0) {
		cout << "Stack is Empty.\n";
		return 0;
	}
	else {
		return a[top];
	}
}

bool Stack::isEmpty()
{
	if(top==-1)
        return true;
    else
        return false;
}

bool Stack::isFull()
{
    if(top==MAX)
        return true;
    else
        return false;
}

// Driver program to test above functions

int main() {
    class Stack s;
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            s.push(val);
            break;
         }
         case 2: {
            s.pop();
            break;
         }
         case 3: {
            s.display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
	return 0;
}
