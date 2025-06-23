#include <iostream>

using namespace std;


void Fill2DimensionalArr(int arr[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }
}

void Print2DimensionalArray(int arr[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%0*d ", 2, arr[i][j]);
        }
        cout << endl;
    }
}
int main()
{
    /*
    // int x[Rows][Cols];
    int x[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }

    */
    int multiplicationTableArr[10][10];

    Fill2DimensionalArr(multiplicationTableArr);
    Print2DimensionalArray(multiplicationTableArr);

    return 0;

}


