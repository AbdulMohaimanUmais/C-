#include <iostream>
using namespace std;

#define MAX 5

class Stack{
    
    int arr[MAX];
    int top;

    public:
    Stack(){top = -1;}

    void push(int value){
        if(top >= MAX-1){
        cout<<"The stack is Full And can't add more elements."<<endl;
        }
        else{
            arr[++top] = value;
            cout<<"The value is "<<value<<endl;
        }
    }
};

int main(){

    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(30);
} 