class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cowsandbulls = 0;
        int hash1[10] = {0};
        int hash2[10] = {0};
        for(int i = 0; i < secret.size(); i++){
            if(secret[i] == guess[i]) bulls++;
        }
        for(int i = 0; i < secret.size();i++){
            hash1[secret[i] - '0']++;
        }
        for(int i = 0; i < secret.size();i++){
            hash2[guess[i] - '0']++;
        }
        for(int i = 0; i<10; i++){
            if(hash1[i] != 0 && hash2[i] != 0){
                int c = min(hash1[i], hash2[i]);
                while(c--) cowsandbulls++;}
        }
        return to_string(bulls) + "A" + to_string(cowsandbulls - bulls) + "B";
    }
};