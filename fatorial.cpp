#include <iostream>
using namespace std;
int fat(int num){
   int cont=0 , x=0,fatorando;
    if(num<=0){
        return num;
    }
    else{
            if(cont==0){
                x=num;
            }
            else{
            fatorando=num*(num-1);
            return fatorando;
            }
    }
}

int main(){
   while(1){
    int op,num;
    cout << "Digite um numero inteiro fatorial que deseja calcular: ";
    cin >> num;
   if(num=0){
    break;
   }
    op=fat(num);
    cout << fat << " ";
   }
}