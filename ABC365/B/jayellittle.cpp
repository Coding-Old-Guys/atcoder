#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Length N
    int N;
    cin >> N;
    
    // Storing elements in vector A
    vector<int> A(N);
    int i;
    for (i=0; i<N; i++) cin >> A[i];
    
    // Sort duplicate of A
    vector<int> A_sorted(A);
    sort(A_sorted.begin(), A_sorted.end(), greater<int>());
    
    // Find index of element in A which is same with second
    // int second = second biggest element of A
    int second = A_sorted[1];
    for (i=0; i<N; i++) {
        if (A[i] == second) break;
    }
    
    // Print i(index)
    cout << i + 1 << endl;
}
