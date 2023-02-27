#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float get1, get2, get3, get4;
    char opr;
    cout << "Calculator version 1.0.0" << endl;
    cout << "Please enter 4 numbers: ";
    cin >> get1 >> get2 >> get3 >> get4;
    cout << "Enter operator: +, -, *, /: "; 
    cin >> opr;
    cout << get1 << " "<< opr << " " << get2 << " " << opr << " " << get3 << " " << opr << " " << get4;
    switch(opr){  
        case'+':
            cout << get1 + get2 + get3 + get4;
            break;
        case '-':
            cout << get1-get2-get3-get4;
            break;
        case '*':
            cout << get1*get2*get3*get4;
            break;
        case '/':
            if(get2 !=0)
                cout << get1/get2/get3/get4;
            else
                cout << "Cannot divide by zero\n" << endl;
            break;
        default:
            cout << "Illegal operation" << endl;
    }
    return 0;
}



