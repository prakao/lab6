#include<iostream>
using namespace std;

int main(){
    int integer;
    int EN = 0;
    int ON = 0;

    while(true){
        cout << "Enter an integer: ";
        cin>>integer;
        
        if (integer == 0){
            break;
            EN =0;
            ON =0;
        }
        else if(integer%2 == 0){
            EN++;
        }
        else{
            ON++;
        }
        
    }

    cout << "#Even numbers = "<<EN<<endl;
    cout << "#Odd numbers = "<<ON;
    return 0;
}
