class Solution {
	public:
	vector<int> findTwoElement(vector<int>& arr) {
		long long n = arr.size();
		long long s = -(n * (n + 1) / 2), ss = -(n * (n + 1) * (2*n + 1) / 6);
		for(auto i : arr){
		    s += i;
		    ss += i * i;
		}
        return {(int)(s*s + ss)/(2 * s),(int)(ss - s*s)/(2*s)};
	}
};
