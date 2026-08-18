class Solution {
public:
   
void swapv(int i , vector<char> &v)
{
    if(i >= v.size()/2) return;

    swap(v[i], v[v.size() - i -1]);

    swapv(i + 1, v);
}

void reverseString(vector<char>& s) {
        
    swapv(0, s);
   
    }
};