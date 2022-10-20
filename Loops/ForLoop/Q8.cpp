#include <iostream>
using namespace std;

int main () {

    // int n ;
    // cin>>n;
    // if ( n > 5 ) {
    //         cout << "Greater than 5";
            
    //     }else if (n < 5) {
    //         cout << "Less than 5";
            
    // } else {
    //     cout << "Equal to 5";
    // }
    
    // char c:
    // cout << "enter the value of c:"<<endl;
    // cin>> c;
    // if(c<='a'&& c>='z'){
    //     cout<< "it is smallcase";
    // }
    // else if (c<='A'&& c>='Z'){
    //     cout<<"it is uppercase"<<endl;
    // }
    // else if (c<='0'&&c>='9'){
    //     cout<< "its a number"<<endl;
    // }

{
    char c;
    cout<< "enter the value here"<<endl;
    cin >> c;
    // int ascii = int(user_input);
    int ascii = c;

    if(ascii>=65 && ascii<=90){
        cout << "Upper Case" << endl;
    }
    else if(ascii>=97 && ascii<=122){
        cout << "Lower Case" << endl;
    }
    else if(ascii>=48 && ascii <=57){
        cout << "Numerical" << endl;
    }
    else{
        cout << "something else" << endl;
    }
}
    return 0;
}