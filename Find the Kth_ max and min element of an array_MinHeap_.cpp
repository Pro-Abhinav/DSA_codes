#include<iostream>
#include<climits>

using namespace std;

void swap(int *x, int* y);

class MinHeap{
    int *harr;
    int capacity;
    int heap_size;
public:
    MinHeap(int a[], int size);
    void MinHeapify(int i);
    int parent(int i){return (i-1)/2;}
    int left(int i){return (2*i+1)/2;}
    int right(int i){return (2*i+2)/2;}

    int giveRoot();
    int giveMin(){return harr[0];}
};

MinHeap::MinHeap(int a[], int size)
{
    heap_size = size;
    harr = a;
    int i= (heap_size-1)/2;
    while(i>=0){
        MinHeapify(i);
        i--;
    }
}

int MinHeap :: giveRoot()
{
    if(heap_size == 0)
        return INT_MAX;

    int root = harr[0];

    if(heap_size>1){
        harr[0]=harr[heap_size-1];
        MinHeapify(0);
    }
    heap_size--;

    return root;
}

void MinHeap :: MinHeapify(int i)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if(l<heap_size && harr[l]<harr[r])
        smallest = l;
    if(r<heap_size && harr[r]<harr[smallest])
        smallest = r;
    if(smallest !=i){
        swap(&harr[i], &harr[smallest]);
        MinHeapify(smallest);
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int smallestNumber(int *ar, int length, int k)
{
    MinHeap mh(ar, length);

    for(int i=0;i<k-1;i++)
        mh.giveRoot();

    return mh.giveMin();
}

int main()
{
    int arr[] = {3,2,4,5,2,21,43,546,23412};
    int length = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    cout<<k<<"th smallest number is: "<< smallestNumber(arr, length, k);


}
