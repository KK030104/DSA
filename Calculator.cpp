#include <iostream>
using namespace std;

int main() {

    int a,b ;

    cout<< "Enter value of a: "<<endl;
    cin>> a;

    cout<< "Enter value of b: "<<endl;
    cin>> b;

    
    
    char operation ;
    cout<< "Enter operation you want to perform :"<<endl;
    cin>> operation;

    switch (operation)
    {
    case '+':
        cout<< (a+b) <<endl;
        break;

    case '-':
        cout<< (a-b) <<endl;
        break;

    case '*':
        cout<< (a*b) <<endl;
        break;

    case '/':
        cout<< (a/b) <<endl;
        break;
      
    case '%' :
        cout<< (a%b) <<endl;
        break;


    
    default: "Please Enter a valid operation.";
        break;
    }
    





}