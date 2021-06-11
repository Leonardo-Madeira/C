#include <iostream>
using namespace std;
int main(){
    int x[4][4],entrar;
        for(int i=0 ; i<4 ; i++){
            for(int j=0 ; j<4 ; j++){
                cout <<"\nDigite um numero: ";
                cin >> x[i][j];
            }
        }
        for(int i=0 ; i<4 ; i++){
            for(int j=0 ; j<4 ; j++){
        cout << x[i][j] << " ";
            }
            cout << "\n";
        }
        cout << x[0][1] << " " << x[0][2] << " " << x[0][3] << "\n" << " " << " " << x[1][2] << " " << x[1][3];
        cout <<"\nEnter para mostrar numeros abaixo da diagonal principal";
        cin >>entrar;
        cout << x[2][0] << " " << x[2][1] << "\n" << x[3][0] << " " << x[3][1] << " " << x[3][2];
}