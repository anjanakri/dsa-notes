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
    cout<<"You're supposed to enter " << size <<" elements :\n";
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the Element :";
        cin >>arr[i];
    }
}

//!printing the elements of the array
void printArray(){
    cout<<"Printing the elements of the array :\n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
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
            cout<<"Element found at "<<i<<" Index";
            return i;
        }
    }
    cout<< "Oh no!" << element << " not found in the array." << endl;
    return -1; 
}
//!Modificaton of array 
//todo Not working properly Need to debug
void modify(){
    int element, value;
    cout<<"Enter the value you wish to modify :";
    cin>> element;
    for (int i = 0; i < size; i++)
    {
         if (element==arr[i])
    {
        cout<<"Enter the updated value :";
        cin>> value;
        arr[i]=value;
    }else{
        "Oh No! Entered element is not in the array!";
    }
    }
    printArray();
}
int main(){  //main
    cout << "Menu of Operation\n";
    createArray();
    enterElement();
    printArray();
    modify();
    search();



    return 0;
}