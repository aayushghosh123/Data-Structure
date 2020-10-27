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

    int smallest = 0;
    int l = 2*i+1;
    int r = 2*i+2;

    smallest = (arr[l]>arr[i])?i:l;

    if(r<size){
        smallest = arr[r]>arr[smallest]?smallest:r;
    }

    if(smallest  != i){
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

   for(int i=0;i<k;i++)
   cout<<arr[i]<<" ";
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int k=0;
    cin>>k;

    min_heap(arr,n,k);
}