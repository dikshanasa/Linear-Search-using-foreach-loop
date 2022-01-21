#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p;
    cin>>p;
    int count=0;
    for(int x: arr){
        if(x!=p){
            count++;
        }
        else if (x==p){
            cout<<count;
            return 0;
        }
    }

}
