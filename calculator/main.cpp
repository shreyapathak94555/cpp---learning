#include<iostream>
using namespace std ;

int main() {
    double a , b;

    int choise ;
    cout << "choose opration ( 1=sum, 2=diffrence, 3=product, 4=division, 5=modulus) ";
    cin >> choise ;

    cout <<"enter first number:" ;
    cin>> a ;

    cout<<"enter second number:" ;
    cin>> b ;

    if (choise == 1){
    cout << "Sum: " << a + b << endl;


    }else if ( choise ==2 ) {
    cout << "Difference: " << a - b << endl;


    }else if (choise == 3 ) {
    cout << "Product: " << a * b << endl; 


    }else if ( choise == 4 ) {
        if (b != 0) {
        cout << "Division: " << a / b << endl;
        } else {
        cout << "Error: cannot divide by zero" << endl;
        }

    } else if ( choise == 5 ) {
        if (b != 0) {
            int a, b;
        cout <<"enter your first whole number"<< endl;
        cin >> a;

        cout <<"enter second whole number" << endl;
        cin >> b;
        
        cout <<"modulus:"<< a%b << endl;
        }
    
    }else{
        cout << "invalid choise"<< endl;
    }

    return 0;
}
        
    
    
