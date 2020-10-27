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

    int largest = 0;
    int l = 2*i+1;
    int r = 2*i+2;

    largest = (arr[i]>arr[l])?l:i;

    if(r<size){
        largest = arr[r]<arr[largest]?r:largest;
    }

    if(largest != i){
        swap(arr[i],arr[largest]);
        heapify(largest);
    }
}

void minheap::buildheap(){
    for(int i=size/2-1;i>=0;i--){
        heapify(i);
    }
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

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    // int k=0;
    // cin>>k;

    min_heap(arr,n,n);

    /*
    for(int i=0;i<k;i++)
    cout<<arr[i]<<" ";
    */

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}