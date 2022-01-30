#include <iostream>
using namespace std;

int main1()
{
    //一、
    //int arr[2][3];
    //arr[0][0] = 1;
    //arr[0][1] = 2;
    //arr[0][2] = 3;
    //arr[1][0] = 4;
    //arr[1][1] = 5;
    //arr[1][2] = 6;

    //cout << arr[0][0] << endl;
    //cout << arr[0][1] << endl;
    //cout << arr[0][2] << endl;
    //cout << arr[1][0] << endl;
    //cout << arr[1][1] << endl;
    //cout << arr[1][2] << endl;

    //外层循环打印行数，内层循环打印列数
    //for (int i = 0; i < 2; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        cout << arr[i][j] << endl;
    //    }
    //}
    //二、
    int arr2[2][3] =
    {
        {1,2,3},
        {4,5,6}
    };
    //for (int i = 0; i < 2; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        cout << arr2[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    int arr3[2][3] = { 1,2,3,4,5,6 };
    //for (int i = 0; i < 2; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        cout << arr2[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //四、
    int arr4[][3] = { 1,2,3,4,5,6, };
    for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << arr2[i][j] << " ";
    }
    cout << endl;
}



    system("pause");

    return 0;
}