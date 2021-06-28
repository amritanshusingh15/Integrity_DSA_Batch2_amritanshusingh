#include <iostream>
using namespace std;

//  Bubble sort Algorithm
void bubbleSort(int arr[], int n){
	for (int i=0; i<n-1;i++){
		for(int j = 0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}

	}
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
 bubbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Selection sort algorithm
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
	for (int i=0; i<n-1;i++){
	    int mini=i;
		for(int j = i+1; j<n; j++){
			if(arr[j]<arr[mini]){
				mini=j;
			}
		}
		swap(arr[i],arr[mini]);
	}
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
 selectionSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// count sort
#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n){
    int maxx=arr[0],i;
	for (i=0;i<n;i++){
	    if(arr[i]>maxx){
	        maxx=arr[i];
	    }
	}
	int c[maxx]={0};
	for(i=0;i<n;i++){
	    c[arr[i]]++;
	}
	for(i=1;i<=maxx;i++){
	    c[i]+=c[i-1];
	}
	int output[n];
	for(i=n-1;i>=0;i--){
	    output[--c[arr[i]]]=arr[i];
	}
	for(i=0;i<n;i++){
	    arr[i]=output[i];
	}
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
 countSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

