#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right){
    int n1= mid-left+1;
    int n2=right-mid;
    vector<int> vec1(n1), vec2(n2);

    for(int i=0;i<n1;i++){
        vec1[i]=arr[left+i];
    }
    for(int i=0;i<n2;i++){
        vec2[i]=arr[mid+i+1];
    }

    int l=0,r=0;
    int k=left;
    while(l<n1 && r<n2){
        if(vec1[l]<vec2[r]){
            arr[k]=vec1[l];
            l++;
            k++;
        }  
        else{
            arr[k]=vec2[r];
            r++;
            k++;
        } 
    }

    if(l<n1){
        while(l<n1){
            arr[k]=vec1[l];
            l++;
            k++;
        }
    }
    if(r<n2){
        while(r<n2){
            arr[k]=vec2[r];
            r++;
            k++;
        }
    }
}

void mergesort(vector<int>& arr, int left, int right){
    if(left>= right) return;
    int mid= left + (right-left)/2 ;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
}

int main(){

vector<int> a={2,6,4,8,9,5,7};
mergesort(a,0,6);
for(auto x:a){
    cout<<x<<" ";
}

return 0;
}