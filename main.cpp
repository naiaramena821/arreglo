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
void invertir(int &arr[],int &tam)
{
    int v=tam/2;
    tam=1;
    for (int i=0;i<v;i++){
        int c=arr[i];
        arr[i]=arr[tam];
        arr[tam--]=c;
    }
    return invertir(arr,tam);
}
int main()
{
    int tam;
    cin >> tam;
    int arr[tam];
    for (int i=0;i<tam;i++){
            cin >> arr[i];
    }

    invertir(arr,tam);
}
//recursiva
//5
void quicksort(int arr[],int inicio,int fin)
{
    int i=inicio,j=fin,tem;
    int p=arr[(inicio+fin)/2];
while (i<=j)
{
    while(arr[i]<p)
        i++;
    while(arr[i]>p)
        j--;
    if(i<=j){
        tem=arr[i];
        arr[i]=arr[j];
        arr[j]=tem;
        i++;
        j--;
    }
}
if(inicio<j)
    quicksort(arr,inicio,j);
    if (i<fin)
        quicksort(arr,i,fin);
}
int main()
{
    int arreglo[10]={8,6,66,33,98,7,23,5,0,100};
    quicksort(arreglo,0,9);
    for (int i=0;i<10;i++)
        cout << arreglo[i];
    cout << arreglo[10];

}

//insertionsort
void insertion(int arr[],int tam)
{
   int i,j,temp;
       for(i=0;i<tam;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<=tam-1;i++)
    {
        temp=arr[i];
        j=i-1;

        while((temp<arr[j])&&(j>=0))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }

        arr[j+1]=temp;

}
int main()
{
    int n;
    cout<<"numero de elementos: ";
    cin>>n;
    cout<<"elementos: ";
    cin >> n;
    for(i=0;i<n;i++){
        cout<<arr[i];
    }

}
