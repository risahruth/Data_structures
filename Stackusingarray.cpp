#include<bits/stdc++.h>
using namespace std;
# define SI 100
int Stack[SI];
int top=-1;
void push(int *top){
        if(*top>SI)
                cout<<"Overflow error\n";
        else {
                cout<<"Enter the number you want to add\n";
                cin>>Stack[++(*top)];
        }
}
void pop(int *top){
        if(*top<0)
                cout<<"The stack is empty therefore cannot be deleted\n";
        else
                cout<<"The deleted element is "<<Stack[(*top)--]<<endl;
}
void display(int *top){
        if(*top==-1)
                cout<<"Nothing to display(stack is empty)\n";
        else{
                cout<<"The elements in the stack are\n";
                for(int i=*top;i>=0;i--)
                        cout<<Stack[i]<<endl;

        }}

int main()
{
        int opt;char c;
        do{
        cout<<"Enter 1 if you want to do push,2 if you want to do pop,3 if you want to display\n";
        cin>>opt;
        switch(opt){
                case 1:{
                               push(&top);
                               break;
                       }
                case 2:{
                               pop(&top);
                               break;
                       }
                case 3:{
                               display(&top);
                               break;
                       }
                default:{
                         cout<<"Not a valid operation\n";
                         break;

        }}
        cout<<"Enter k if you want to continue else press anything else\n";
        cin>>c;
        }while(c=='k'||c=='K');
}


