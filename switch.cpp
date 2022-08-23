#include <iostream>
using namespace std;

int main(){
    int mood = 3;{
       switch (mood) {
      case 1:
        cout << "Happy"<< "\n";
        break; 
      case 2:
      cout << "sad"<< "\n";
        break;
      case 3:
        cout << "exited"<< "\n";
        break;
      case 4:
        cout << "proud" << "\n";
        break;
      }
    }


    int feel = 5; {
        switch (feel) {
            case 1:
            cout << "cry";
            break;

            case 2:
            cout << "sad";
            break;

            default:
            cout << "very happy mind";


        }
    }
return 0;
}