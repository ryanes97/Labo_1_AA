#include <cstdlib>
#include <iostream>

#define SIZE 3

using namespace std;

void sumamatrices(int A[3][3],int B[3][3],int C[3][3], int n, int m){
    if(n==0 and m==0){
        C[n][m]=A[n][m]+B[n][m];
    }
    else if(n==0){
        C[n][m]=A[n][m]+B[n][m];
        sumamatrices(A,B,C,3,m-1);
        
    }
    else{
        C[n][m]=A[n][m]+B[n][m];
        sumamatrices(A,B,C,n-1,m);
    }        
}

int calcularpotencia(int x, int n, int valor){
    if(n==0)
        return valor;
    else
        calcularpotencia(x,n-1,valor*x);
}

int menorvalor(int A[],int n){
    if(n == 1)
        return A[0];
    else if (A[n-1] < menorvalor(A, n-1))
        return A[n-1];
    else
return menorvalor(A,n-1);
}


int main() {
    
    int A[3][3] = {{3,2,1},{4,5,1},{2,3,4}};
    int B[3][3] = {{4,5,6},{4,5,1},{2,3,4}};
    int C[3][3];
    int D[] = {5,6,2,9,8};
   
    
    cout<<"Ejercicio 1"<<endl;
    sumamatrices(A,B,C,SIZE,SIZE);
    for(int i=0;i<SIZE;i++){
        cout<<"[";
        for(int j=0;j<SIZE;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }

    cout<<"Ejercicio 3"<<endl;
    cout<<calcularpotencia(3,3,1);
    cout<<endl;
    
    cout<<"Ejercicio 3"<<endl;
    cout<<menorvalor(D,5);
    

    return 0;
}

