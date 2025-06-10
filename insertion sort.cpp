vector<int> insertion_sort() {
    int n;cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 1; i < n ; ++i) {
        int tmp = arr[i];
        int j = i;
        for ( ; j > 0 && tmp<arr[j-1]; --j) {
            arr[j] = arr[j-1];
        }
        arr[j] = tmp;

    }
    for(auto it:arr)cout << it << ' ';
    return arr;
} // stable and in_place
// best omega(n) , avg theta(n^2) , worst o(n^2)
