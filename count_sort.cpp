void count_sort(int arr[], int n)
{
  
    int k = *max_element(arr, arr + n);
    int count[k + 1] = { 0 };

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (int i = 1; i <= k; i++) {
        count[i] = count[i] + count[i - 1];
    }
  
    int ans[n];
    for (int i = n - 1; i >= 0; i--) {
        ans[--count[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = ans[i];
    } 
} // stable , not inplace, all cases n+k
