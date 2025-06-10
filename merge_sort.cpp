void merge(vector<ll>&v, ll l , ll r , ll mid){
    ll arr1[mid-l+1],arr2[r-mid];
    for (ll i = 0; i < mid-l+1 ; ++i) {
        arr1[i] = v[l+i];
    }
    for (ll i = 0; i < r-mid ; ++i) {
        arr2[i] = v[mid+1+i];
    }
    ll i = 0 , j = 0 , k = l;
    while(i<mid-l+1 && j<r-mid){
        if(arr1[i]<arr2[j]){
            v[k] = arr1[i];
            i++;
        }
        else{
            v[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i<mid-l+1){
        v[k] = arr1[i];
        i++;
        k++;
    }
    while(j<r-mid){
        v[k] = arr2[j];
        j++;
        k++;
    }
}

void merge_sort(vector<ll>&v , ll l , ll r){
    if(l >= r)return;

    ll mid = (l+r)/2;

    merge_sort(v,l,mid);
    merge_sort(v,mid+1,r);
    merge(v,l,r,mid);
} // not inplace, stable, nlogn all cases
