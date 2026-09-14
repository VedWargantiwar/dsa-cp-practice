int solve(int* arr, int n, int B) {
    unordered_map<int,int> mpp;
    int count = 0;
    int xr = 0;
    mpp[0] = 1;
    for(int i = 0; i < n; i++){
        xor ^= arr[i];
        auto a = mpp.find(xr ^ B);
        if(a != mpp.end()) count += a->second;
        mpp[xr]++;
    }
    return count;
}
