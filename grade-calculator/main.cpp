#include <iostream>
using namespace std ;

int main () {
    int marks ;
    cout<<"Enter your marks:"<< endl;
    cin >> marks ;

    if ( marks > 100 || marks < 0) {
        cout <<"invalid marks"<< endl;

    }else if (marks >= 90 && marks <= 100) {
        cout <<"grade A"<< endl;

    }else if ( marks >= 80 && marks < 90){
        cout <<" grade B"<< endl;

    }else if (marks >=70 && marks < 80){
        cout <<" grade C" << endl;

    }else if (marks >=60 && marks < 70){
        cout <<" grade D"<< endl;

    }else if (marks >=50 && marks < 60){
        cout <<"grade E"<< endl;

    }else if (marks >=40 && marks < 50){
        cout <<"grade F"<< endl;

    }else{
        cout <<"FAIL"<< endl;
    }

return 0;
    
}