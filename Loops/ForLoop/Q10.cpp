#include <iostream>
using namespace std;

int main()   {
    int n =5;
    for (int row = 0; row < 2*n; row++){
        int colsInRow = row > n ? 2*n - row : row;
        int spacesInROw = n - colsInRow;

        for (int space = 0; space < spacesInROw; space++)
            cout << " ";

        for (int col = 0; col < colsInRow ; col++) 
            cout << "* " ; 
        cout << "\n";
    }
}


  