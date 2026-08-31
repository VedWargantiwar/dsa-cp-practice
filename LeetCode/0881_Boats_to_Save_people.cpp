class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int low = 0, high = people.size() - 1;
        int total = 0;
        while(low <= high){
            if(people[high] + people[low] > limit) {total++;high--;}
            else {total++;low++;high--;} 
        }
        return total;
    }
};