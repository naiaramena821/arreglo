#include <iostream>

using namespace std;


// 1 imprimir los elementos de un arreglo

void imprimir(int arr[],int tam)
{
    for (int i=0;i < tam;i++){
        cout << arr[i] << endl;
    }
}
int main()
{
    int x[5];
    for (int i=0;i<5;i++){
    cin>> x[i];
    }
    imprimir(x,5);
    return 0;
}

//2 función para retornar la suma de los elementos de un arreglo
//recursiva
int sumar(int arr[],int tam)
{
    if (tam==1){
        return arr[0];
    }
    else{
    return arr[tam-1]+sumar(arr,tam-1);
}
}
int main()
{
    int tam;
    cin >> tam;
    int arr[tam];
    for (int i=0;i<tam;i++){
            cin >> arr[i];
    }
    cout << sumar (arr,tam) << endl;
}

//iterativa
int sumi(int arr[],int tam)
{
    int sum=0;
    for (int i=0;i<tam;i++){
        sum+=arr[i];
        }
    return sum;
}
int main()
{
    int tam;
    cin >> tam;
    int arr[tam];
    for (int i=0;i<tam;i++){
            cin >> arr[i];
    }
    cout << sumi (arr,tam) << endl;
}

// 3 
void imprimir(int arr[], int tam)
            {
                for(int i = 0; i < tam; i++)
                    cout << arr[i] << " ";
                    cout << endl;
            }

            int swap(int &x, int &y){
                        int temp = x;
                            x = y;
                            y = temp;
            }

            int invertir(int arr[], int tam)
            {
                for(int i = 0; i < tam/2; i++){
            swap(arr[i], arr[tam-1-i]);
                }
            }

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int a = 5;
    int b = 10;
    swap(a,b);
    cout << a << " " << b << endl;

    imprimir(arr, 5);
    invertir(arr, 5);
    imprimir(arr, 5);
}
//recursiva
int invertir(int arr[],int tam)
{
    if(tam==0){
        return arr[0];
    }
    else
    while(tam>0){
        return arr[tam];
        tam--;
    }
}
int main()
{
    int tam;
    int arr[tam];
    for (int i=0;i<tam;i++){
            cin >> arr[i];
    }

    cout << invertir(arr,tam);
}

//5
//burbuja 
int main(){
    int arr[]={99,3,21,45,0};
    int n=5;
    int i,j;
    for (i=1;i<n;i++){
        for(j=n-1;j>=i;j--){
            if(arr[j-1] > arr[j]){
                int aux=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=aux;
            }
        }
    }
    for(i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
}

//insertion
void imprimir(int ar[], int tm)
{
    int j;
    for (j = 0; j < tm; j++)
    {
        cout <<" "<< ar[j];
    }
    cout << endl;
}

void insertionSort(int arr[], int tam)
{
    int i, j, aux;
    for (i = 1; i < tam; i++)
    {
        aux = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] >aux)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j +1] = aux;

    }
    imprimir(arr, tam);
}

int main()
{
    int ar[6] = {5, 1, 6, 2, 4, 3};
    insertionSort(ar, 6);
    return 0;
}

//quicksort
