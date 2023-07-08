#include<iostream>
using namespace std;
int main()
{
    int mat[3][3] = {
    {3, 6, 8},
    {5, 4, 7},
    {2, 4, 7}};

//printing the 2D array:
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << mat[i][j] << "  ";
    }
    cout << endl;
}

}