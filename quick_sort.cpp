int partition(vector<int> &A, int left, int right) {

        x ← A[left]
    
    i ← left
    
    for j ← left+1 to right
    
    if A[j] < x then
    
    i ← i + 1
    
    swap(A[i], A[j])
    
    end if
    
    end for j
    
    swap(A[i], A[left])
    
    return i
}

void quickSort(vector<int> &vec, int low, int high) {

    if (low < high) {
        int pi = partition(vec, low, high);
        quickSort(vec, low, pi - 1);
        quickSort(vec, pi + 1, high);
    }
}// best avg nlogn, worst n^2, in-place,not stable
