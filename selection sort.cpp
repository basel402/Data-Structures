void selection_sort(){
    // selection sort is better in movement but worse in comparison than insertion
    // unstable(equal elements may be exchanged and not sorted according to who came first in the array) and in_place(didnt use extra memory just the mn var)
    int n;cin >> n;
    vector<ll>v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < n ; ++i) {
       ll mn = i;
        for (int j = i+1; j < n; ++j) {
            if(v[j]<v[mn]){
                mn = j;
            }
        }
        swap(v[i],v[mn]);
    }
    for(auto it:v)cout << it << ' ';
} // all cases n^2
