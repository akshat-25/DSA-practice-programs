#include <iostream>
#include <queue>
using namespace std;

class heap
{

public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }

        // Step 1 -> Put last element into first element
        arr[1] = arr[size];

        // Step 2 -> Remove last element
        size--;

        // Step 3 -> Take root node to its correct position
        int i = 1;
        while (i < size)
        {
            int leftIndex = i * 2;
            int rightIndex = i * 2 + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }

            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }

            else
            {
                return;
            }
        }
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        // step 1: swap
        swap(arr[size], arr[1]);
        // step 2:
        size--;

        // step 3
        heapify(arr, size, 1);
    }
}

int main(int argc, char const *argv[])
{
    heap h;
    h.insert(50);
    h.insert(53);
    h.insert(55);
    h.insert(54);
    h.insert(52);

    h.print();

    h.deleteFromHeap();
    h.deleteFromHeap();
    h.deleteFromHeap();

    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    // Heap Creation
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Heap Sort
    heapSort(arr, n);

    cout << "Array in sorted order is -> " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Using PRIORITY QUEUE here

    cout << "Using the priority queue here -> " << endl;

    // Max - Heap
    priority_queue<int> pq;

    pq.push(2);
    pq.push(4);
    pq.push(5);
    pq.push(1);
    pq.push(59);

    cout << pq.top() << endl;
    pq.pop();

    cout << pq.top() << endl;

    cout << "Size is " << pq.size() << endl;

    // Min Heap

    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(2);
    minheap.push(22);
    minheap.push(1);
    minheap.push(32);
    minheap.push(4);
    
    cout << minheap.top() << endl;
    return 0;
}