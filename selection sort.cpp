void selection_sort(){
    // selection sort is better in movement but worse in comparison than insertion both stable and implace
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
}
