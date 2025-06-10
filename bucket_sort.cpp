void bucketSort(float arr[], int n) {
   
    vector<float> b[n];

    for (int i = 0; i < n; i++) {
        int bi = n * arr[i];
        b[bi].push_back(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        insertionSort(b[i]);
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < b[i].size(); j++) {
            arr[index++] = b[i][j];
        }
    }
}// stable not inplace, best and avg n , worst n^2
// this code works only for floating numbers in range [0,1) 1 not included
