void sort(vector<int> &v,int start,int end) {
    int low = start;
    int med = low;
    int high = end;
    if(low >= high) return;
    int k = v[low];
    while(med <= high){
        if(v[med] < k){
            swap(v[med],v[low]);
            med++;
            low++;
        }
        else if(v[med] > k){
            swap(v[med],v[high]);
            high--;
        }
        else med++;
    }
    sort(v,start,low - 1 );
    sort(v,high + 1,end);

}