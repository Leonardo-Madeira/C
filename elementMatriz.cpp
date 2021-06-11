#include <iostream>
using namespace std;
int main(){
    int mat1[3][3],mat2[3][3];
    cout << "    Matriz 1";
    for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                cout << "\nDigite um numero: ";
                cin >> mat1[i][j];
            }
    }
    cout << "   Matriz 2";
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout << "\nDigite um numero: ";
            cin >> mat2[i][j];
        }
    }
    for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                cout << mat1[i][j]+mat2[i][j] << " ";
            }
            cout << "\n";
    }
}