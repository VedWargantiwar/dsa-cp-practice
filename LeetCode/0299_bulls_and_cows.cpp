class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cowsandbulls = 0;
        map<int.int> mpp;
        for(int i = 0; i < secret.size(); i++){
            if(secret[i] == guess[i]) bulls++;
        }
        for(int i = 0; i < secret.size();i++){
           mpp[secret[i]]++;
        }
        for(int i = 0; i < secret.size();i++){
           mpp[guess[i]]--;
        }
        
        return to_string(bulls) + "A" + to_string(cowsandbulls - bulls) + "B";
    }
};