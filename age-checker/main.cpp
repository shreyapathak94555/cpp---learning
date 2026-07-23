#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age";
    cin>>age;

    if (age <0) {
        cout<<"age cannot be negative"<< endl;

    }else if (age < 18){
        cout<<" you are under age"<<endl;

    }else if (age < 65){
        cout <<" you are adult"<< endl;

    }else{
        cout <<" you are a senior citizen"<< endl;
    
    }
    return 0;
}