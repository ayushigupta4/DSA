#include<iostream>
using namespace std;

class Stack {
public: 
    int *arr;
    int top;
    int size;

public:
    Stack(int size) {
        this -> size = size;
        this -> arr = new int[size];
        this -> top = -1;
    }

    void push(int elmt) {
        if(size - top > 1) {
            top++;
            arr[top] = elmt;
        }
        else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if(top >= 0) top--;
        else cout << "Stack Underflow" << endl;
    }

    int peek() {
        if(top >=0) {
            return arr[top];
        }
        else {
            cout << "Stack is empty" << endl;
        }
    }

    bool isEmpty() {
        if(top == -1) return true;
        else return false;
    }
};

int main() {

    Stack st(5);
    st.push(22);
    st.push(44);
    st.push(66);
    st.push(88);
    st.push(3);
    st.push(4);
    st.push(99);
    st.pop();
    cout << st.peek() << endl;


    return 0;
}