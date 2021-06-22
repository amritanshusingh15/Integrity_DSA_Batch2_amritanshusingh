//Size of array

#include<iostream>
using namespace std;

int main(){
int a[]={3,4,5,6,10,12,8};
cout<<"Length of array is "<<sizeof(a)/sizeof(a[0]);
}


// Reverse an array

#include <iostream>
using namespace std;

void reverse(int a[],int n){
    int i=0,j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    int n,i,b;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
       cin>>a[i];

    }
    reverse(a,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}

//Find the maximum and minimum element in an array

#include <iostream>
using namespace std;

int minmax(int a[], int n){
    int i,max=a[0],min=a[1];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }else if(a[i]<min){
            min=a[i];
        }
    }
    cout<<max<<" "<<min;
}
int main()
{
    int n,i,b;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
       cin>>a[i];

    }
    minmax(a,n);

    return 0;
}

// Find the "Kth" max and min element of an array

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int kth(vector<int>a,int k){
    int i,n;
    n=a.size();
    sort(a.begin(),a.end());
    cout<<"Kth min element "<<a[k-1]<<" Kth max element "<<a[n-k];
}
int main()
{
    int n,i,b,k;
    cin>>k;
    cin>>n;
    vector<int>a;
    for(i=0;i<n;i++){
        cin>>b;
       a.push_back(b);

    }
    kth(a,k);

    return 0;
}

//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include<bits/stdc++.h>
#include<vector>
using namespace std;

void s012(vector<int>a)
{
    int i;
    int l = 0;
    int h = a.size() - 1;
    int mid = 0;

    while (mid <= h) {
        switch (a[mid]) {
        case 0:
            swap(a[l++], a[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(a[mid], a[h--]);
            break;
        }
    }
    for(i=0;i<a.size();i++){
        cout<<a[i];
    }
}

int main()
{
    int n,i,b;

    cin>>n;
    vector<int>a;
    for(i=0;i<n;i++){
        cin>>b;
       a.push_back(b);

    }
    s012(a);

    return 0;
}


// Move all the negative elements to one side of the array

void moveoneside(vector<int>a){
    int i,n,j=0;
    n=a.size();
    for(i=0;i<n;i++){
        if(a[i]<0){
            int temp;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n,i,b,k;
    cin>>n;
    vector<int>a;
    for(i=0;i<n;i++){
        cin>>b;
       a.push_back(b);

    }
    moveoneside(a);

    return 0;
}

//Find the Union and Intersection of the two sorted arrays.

#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
using namespace std;

void intersection(vector<int>a,vector<int>b){
    int i,n,m;
    n=a.size();
    m=b.size();
    vector<int>res;
    unordered_map<int,int>mp;
    for(i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(i=0;i<m;i++){
        if(mp.find(b[i])!=mp.end()){
            res.push_back(b[i]);
            mp[b[i]]--;
        }
    }
    cout<<"Intersecting elements are"<<endl;
    for(i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
void un(vector<int>a,vector<int>b){
    int i=0,j=0,m,n,k=0;
    n=a.size();
    m=b.size();
    int res[m+n];
    while(i<n && j<m){
        if(a[i]<b[j]){
            res[k]=a[i];
            i++;
            k++;
        }else{
            res[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n){
        res[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        res[k]=b[j];
        j++;
        k++;
    }
    cout<<"Union result is "<<endl;
    for(i=0;i<m+n;i++){
        cout<<res[i]<<" ";
    }
}
int main()
{
    int n,i,b,m;
    cin>>n;
    cin>>m;
    vector<int>a;
    vector<int>c;
    for(i=0;i<n;i++){
        cin>>b;
       a.push_back(b);
    }
    for(i=0;i<m;i++){
        cin>>b;
       c.push_back(b);
    }
    intersection(a,c);
     un(a,c);

    return 0;
}

// Given an array of digits check if the array is palindrome or not.

#include<bits/stdc++.h>
#include<vector>
using namespace std;

void pallindrome(vector<int>a){
    int n=a.size(),i,f=0;
    if(n/2!=0){
    for(i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            f=1;
            break;
        }
    }
    }
    if(f!=0){
        cout<<"NOT A PALLINDROME";
    }else{
        cout<<"IS A PALLINDROME";
    }
}

int main()
{
    int n,i,b;

    cin>>n;
    vector<int>a;
    for(i=0;i<n;i++){
        cin>>b;
       a.push_back(b);

    }
    pallindrome(a);

    return 0;
}

