//todo Still Working on this program
#include<iostream>
using namespace std;
//function declaration
const int n=10;
int arr[n];
int size=0;

//!creation of new array
void createArray(){
    cout<<"Enter the size of the array: ";
    cin>> size;
    if (size>n)
    {
        cout<<"Size too Large!";
        size=n;
    }
}

//!entering elements
void enterElement(){
    cout<<"You're supposed to enter\n" << size <<"elements :";
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the Element :";
        cin >>arr[i];
    }
}

//!printing the elements of the array
void printArray(){
    cout<<"Printing the elements of the array :";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
}
//!Linea-Search
int search(){
    int element;
    cout<< "Enter the element you wish to search :";
    cin>> element;
    for (int i = 0; i < size; i++)
    {
        if (element==arr[i])
        {
            cout<<"Element found at"<<i<<"Index";
            return i;
        }
        else
        {
            cout<<element<<"Not found in the array";
        }
    return -1;
    }
    
}
//!Modificaton of array 
//todo Not working properly Need to debug
void modify(){
    int mod=search();
    int value;
    cout<<"Enter the modified value";
    cin>> value;
    arr[mod]=value;
}
int main(){  //main
    cout << "Menu of Operation";
    createArray();
    enterElement();
    printArray();
    modify();
    search();



    return 0;
}