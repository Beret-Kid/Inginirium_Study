#include <iostream>
#include <iomanip>
using namespace std;

const unsigned int DIM1 = 4;
const unsigned int DIM2 = 3;
int arr[DIM1][DIM2];
    
int main()
{
    
    for(int i = 0; i < DIM1; i++) {
        for(int j = 0; j < DIM2; j++) {
            arr[i][j] = rand()%20 - 10;
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
    int sum = 0;
    for(int i = 0; i < DIM1; i++){
        for(int j = 0; j < DIM2; j++){
            if(arr[i][j] < 0){ 
                sum += arr[i][j];
            }
        }
    }
    cout << "Сумма отрицательных элементов: " << sum << endl;

    return 0;
}