#include<iostream>
#include <stdio.h>
#define N 10
using namespace std;

void sort(int arr[], int n);
void printArray(int arr[], int size);
void printUnion(int arr1[], int arr2[], int m, int n);
void printIntersection(int arr1[], int arr2[], int m, int n);

int main()
{
	int lenA;
	cout<<"Enter number of elements for set A (max 10): ";
	cin>>lenA;
	
	int A[N];
	for (int i=0; i<lenA; i++){
		cout<<"A["<<i<<"] = ";
		cin>>A[i];
	}
	cout<<"\n";
	
	int lenB;
	cout<<"Enter number of elements for set B (max 10): ";
	cin>>lenB;
	
	int B[N];
	for (int i=0; i<lenB; i++){
		cout<<"B["<<i<<"] = ";
		cin>>B[i];
	}
	cout<<"\n";
	cout<<"--------OUTPUT--------\n"<<endl;
	
	sort(A, lenA);
	cout<<"A = ";
	printArray(A, lenA);
	
	sort(B, lenB);
	cout<<"\nB = ";
	printArray(B, lenB);
	
	cout<<"\nAuB = ";
	printUnion(A, B, lenA, lenB);
	
	cout<<"\nAnB = ";
	printIntersection(A, B, lenA, lenB);
	
	return 0;
}








void sort(int arr[], int n){	
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}	
}

void printArray(int arr[], int size){
    int i;
    cout<<"{";
    for (i = 0; i < size; i++)
        cout << arr[i] << ", ";
    cout<<"\b\b}"<<endl;
}

void printUnion(int arr1[], int arr2[], int m, int n){
    int i = 0, j = 0;
    cout<<"{";
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << ", ";
 
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << ", ";
 
        else {
            cout << arr2[j++] << ", ";
            i++;
        }
    } 
    while (i < m)
        cout << arr1[i++] << ", ";
 
    while (j < n)
        cout << arr2[j++] << ", ";
    cout<<"\b\b}"<<endl;
}

void printIntersection(int arr1[], int arr2[], int m, int n){
    int i = 0, j = 0;
    cout<<"{";
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else 
        {
            cout << arr2[j] << ", ";
            i++;
            j++;
        }
    }
    cout<<"\b\b}"<<endl;
}

