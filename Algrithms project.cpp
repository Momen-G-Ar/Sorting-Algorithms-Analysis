#include <bits/stdc++.h>
#include "testlib.h" 

using namespace std::chrono; 
using namespace std; 

// By Momen, Mohammed, Tamim 

void merge_sort(vector <int> & A, int left ,int right);
void merge(vector <int> & A, int left, int mid, int right);
void insertion_sort(vector <int> & A , int N);
void count_sort(vector<int> & A, int N);
int partition (vector <int> & A, int low, int high);
void quick_sort(vector <int> & A, int low, int high); 

int main() 
{
    ios::sync_with_stdio(false); cin.tie(); cout.tie(0); 
    #ifndef ONLINE_JUDGE 
        freopen("input.txt","r", stdin); 
        freopen("output.txt","w", stdout); 
    #endif 

    int N ; cin >> N; 
    vector <int> v(N);
    for (int i = 0; i < N; ++i) 
        v[i] = i; 


    cout << "Input size : " << N << endl; 

    // Merge sort 
    shuffle(v.begin(), v.end()); 
    auto start = high_resolution_clock:: now();
    merge_sort(v, 0, N - 1); 
    auto stop = high_resolution_clock:: now(); 
    auto duration = duration_cast <microseconds> (stop - start); 
    cout << "Time taken by function merge sort : " 
         << duration.count() << " microseconds" << endl; 



    // Insertion sort 
    shuffle(v.begin(), v.end()); 
    start = high_resolution_clock:: now(); 
    insertion_sort(v, N - 1); stop = high_resolution_clock:: now(); 
    duration = duration_cast <microseconds> (stop - start); 
    cout << "Time taken by function insertions sort : " 
         << duration.count() << " microseconds" << endl; 


    // Counting sort 
    shuffle(v.begin(), v.end()); 
    start = high_resolution_clock::now(); 
    count_sort(v, N - 1); 
    stop = high_resolution_clock:: now(); 
    duration = duration_cast <microseconds> (stop - start); 
    cout << "Time taken by function counting sort : " 
         << duration.count() << " microseconds" << endl; 

    //Quick sort 
    shuffle(v.begin(), v.end()); 
    start = high_resolution_clock:: now(); 
    quick_sort(v, 0, N - 1); 
    stop = high_resolution_clock:: now(); 
    duration = duration_cast <microseconds> (stop - start); 
    cout << "Time taken by function quick sort : " 
         << duration.count() << " microseconds" << endl; 


    return 0; 
}


void quick_sort(vector <int>& A, int low, int high) 
{
    if (low < high)
    {
        int pi = partition(A, low, high); 
        quick_sort(A, low, pi - 1); 
        quick_sort(A, pi + 1, high); 
    } 
}

int partition (vector <int> & A, int low, int high) 
{
    int pivot = A[high]; 
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (A[j] < pivot) 
        {
            i++;
            swap(A[i], A[j]); 
        }
    }
    swap(A[i + 1], A[high]); 

    return (i + 1); 
}


void insertion_sort(vector <int>& A, int N) 
{
    for (int i = 0; i < N; ++i) 
    {
        int cur = A[i]; 
        int j = i - 1; 

        while(cur < A[j] && j >= 0) 
            A[j + 1] = A[j], j--; 

        A[j + 1] = cur; 
    }
}


void count_sort(vector <int>& A, int N) 
{ 
    vector <int> freq (N + 1, 0); 
    for(int x : A) 
        freq[x]++; 

    int i = 0; 
    for(int val = 0; val <= N; val++) 
        while(freq[val]--) 
            A[i++] = val; 
}


void merge_sort (vector <int>& A, int left , int right) 
{
    if(left >= right) 
        return; 

    int mid = (left + right) / 2; 

    merge_sort(A , left, mid); 
    merge_sort(A, mid + 1 , right); 

    merge(A , left, mid , right); 
}

void merge(vector <int>& A, int left, int mid, int right) 
{
    vector <int> R, L; 
    for (int i = left; i <= mid; ++i) 
        L.push_back(A[i]); 

    for (int i = mid + 1; i <= right; ++i) 
        R.push_back(A[i]); 

    L.push_back(INT_MAX); 
    R.push_back(INT_MAX);

    int rp = 0 , lp = 0; 
    for(int i = left ; i <= right ; i ++) 
    {
        if(L[lp] >= R[rp]) 
            A[i] = R[rp++]; 
        else 
            A[i] = L[lp++]; 
    }
}
