#include<bits/stdc++.h>
using namespace std;

class minheap{
    int size;
    int *arr;

    public:
    minheap(int size,int input[]);
    void heapify(int i);
    void buildheap();
};

minheap::minheap(int size,int input[]){
    this->size = size;
    this->arr = input;

    buildheap();
}

void minheap::heapify(int i){
    if(i>=size/2)
    return;

    int largest;
    int l = 2*i+1;
    int r = 2*i+2;

    largest = arr[i]>arr[l]?l:i;

    if(r<size)
    largest = arr[largest]<arr[r]?r:largest;

    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(largest);
    }
}

void minheap::buildheap(){
    for(int i=size/2;i>=0;i--)
    heapify(i);
}

void buildheap(int arr[],int n,int k){
    minheap *m = new minheap(k,arr);

    for(int i=k;i<n;i++){
        if(arr[0]>arr[i])
        continue;
        else{
            arr[0] = arr[i];
            m->heapify(0);
        }
    }
}

void max_heap(int arr[],int i,int n){
    int largest=i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && arr[l]>arr[largest])
    largest = l;

    if(r<n && arr[r]>arr[largest])
    largest = r;

    if(i != largest){
        swap(arr[i],arr[largest]);
        max_heap(arr,largest,n);
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int k=0;
    cin>>k;

    buildheap(arr,n,k);

    for(int i=(n-2)/2;i>=0;--i){
        max_heap(arr,i,n);
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}