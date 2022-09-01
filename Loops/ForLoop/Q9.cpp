#include <iostream>
using namespace std;

int main()   {
       int n =5;
    for (int row = 0; row < 2*n; row++){

        int colsInRow = row > n ? 2*n - row : row;
        
        for (int col = 0; col < colsInRow ;col++) {
       
     
      cout << "* " ;  }
      cout << "\n";
    }


    //if (b<5);
    
   // else;
    //cout << " ";

    


    return 0; 
    }