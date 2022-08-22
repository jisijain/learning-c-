#include <iostream>
using namespace std;
#include <string>  
#include <cmath>
int main() { 
  
  string greeting = "hello";
  cout << greeting <<endl;
  cout << "Hello Jisi in World!"<<endl;
  cout << "Hello Jisi in World!"<<endl;
  cout << "welcome back!"<<endl;
  string firstname = "Mahima";
  string lastname = "Jain";
  string Fullname = firstname + " " + lastname;
  cout << Fullname <<endl;
  string firstName = "Mahima ";
  string lastName = "Jain";
  string FullName = firstName.append(lastName);
  cout << FullName << endl;

  string text = "ABC DEF GHI JKL MNO PQR STU VW XYZ";
  cout << "Total number of character. is " << text.size() << endl;

  string quality = "Smurt";
  quality[2] = 'a';
  cout << quality << endl; 
  
  cout << sqrt(4)<< "\n";

  bool MahimaIsSmart = true;
  bool KshamaIsDhor = false;
  cout << MahimaIsSmart <<"\n";
  cout << KshamaIsDhor <<"\n";
  int m = 10;
  int n = 9;
  cout << (m < n) <<"\n";

  if (21<30) {
    cout << "I am smart" << "\n";
  }
  int age = 24;
  if (age >19){
    cout << "Adult" <<"\n";
  
  } else {
    cout << "teenage";
  }
  int age1 = 25;
  if (age>25) {
  cout << "List1";
  } else if (age<10) {
    cout << "List2";
  } else {
    cout << "list3";
  }


  
  return 0;
}