#include<iostream>
using namespace std;

int main(){
    int x = 0;
    int even = 0;
    int odd = 0;
    cout << "Enter an integer: ";
    cin >> x;
    while(x != 0){
        if(x%2 != 0)
            odd++;
        else{ 
            even++;
        }
        cout << "Enter an integer: ";
        cin >> x;
    }   
    cout << "#Even numbers = " << even <<"\n";
    cout << "#Odd numbers = " << odd <<"\n" ;
    return 0;
}
