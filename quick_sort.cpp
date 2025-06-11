int partition(vector<ll>&v, ll n, ll l, ll r){
    ll piv = v[l];
    int i = l;
    for (int j = i+1; j < n ; ++j) {
        if(v[j]<piv){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[piv],piv);
    return i;
}

void quickSort(vector<int> &vec, int low, int high) {

    if (low < high) {
        int pi = partition(vec, low, high);
        quickSort(vec, low, pi - 1);
        quickSort(vec, pi + 1, high);
    }
}// best avg nlogn, worst n^2, in-place,not stable
