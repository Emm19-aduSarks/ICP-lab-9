#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;
//C) searchValidEntries function
void searchValidEntries(int XL , int YL, int XH, int YH, int A[101][101])
{
    for (int i = XL; i < XH + 1; i++)

    {

        for (int j = YL; j< YH+ 1; j++)
        {
            cout << "["<< i<< "," << j<< "]" << " counts: "<< A[i][j] << endl;
        }
    }
}

//B) populateArray function
void populateArray(int A[101][101], int N){
    int count = 0;
    srand(time(0));

    for (int i = (rand() % 100) + 1; i < 100; i++)

    {

        for (int j = (rand() % 100) + 1; j< 100; j++)
        {
            
            if (count != N)
            {
               
                count++;
                A[i][j] += 1;
            }
        }
    }
}

int main(){
    //A) Decalring and initializing the array
    int A[101][101] = {};

    populateArray(A, 1000);

    searchValidEntries(80, 1, 100, 10, A);
    
}