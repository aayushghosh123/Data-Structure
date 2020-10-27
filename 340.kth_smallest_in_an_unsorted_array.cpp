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

    int smallest;
    int l = 2*i+1;
    int r = 2*i+2;

    smallest = arr[i]>arr[l]?l:i;

    if(r<size){
        smallest = arr[r]>arr[smallest]?smallest:r;
    }

    if(smallest != i){
        swap(arr[i],arr[smallest]);
        heapify(smallest);
    }
}

void minheap::buildheap(){
    for(int i=size/2-1;i>=0;i--)
    heapify(i);
}

void min_heap(int arr[],int n,int k){
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

void max_heapify(int arr[],int i,int n){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && arr[l]>arr[largest])
    largest = l;

    if(r<n && arr[r]>arr[largest])
    largest = r;

    if(largest != i){
        swap(arr[i],arr[largest]);
        max_heapify(arr,largest,n);
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    min_heap(arr,n,n);

    int k=0;

    // cout<<"Min-Heap"<<endl;
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    // cout<<endl;

    for(int i=(n-2)/2;i>=0;--i){
        max_heapify(arr,i,n);
    }

    cin>>k;

    cout<<"Max-Heap"<<endl;
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";

    for(int i=0;i<k;i++)
    cout<<arr[i]<<" ";
}