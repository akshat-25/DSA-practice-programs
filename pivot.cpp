#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
        cout << "Process is running" << endl;
        
    }

    return s;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {8, 10, 15, 2, 3};

    cout << "Pivot is " << getPivot(arr, 5) << endl;
    return 0;
}

//WAP to print all the reachable nodes of a graph using BFS(queue)

//WAP to check whether graph is connected or not using DFS(stack)