#include <iostream>
using namespace std;

// main function
int main()
{
   int mat[3][3];

   cout << "Insert the values of the matrix: ";
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cin >> mat[i][j];
      }
   }

   //making a line break
   cout << endl;

   // printing the 2D array for visualization.
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout << mat[i][j] << "  ";
      }
      cout << endl;
   }

   return 0;
}

