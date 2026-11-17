    // v is the vector containing the intervals to be merged
    sort(all(v));
    vector<vi> ans;
    int n = v.size();
    for(auto &i : v){
        if(ans.empty() || ans.back()[1] < i[0]) ans.push_back(i);
        else ans.back()[1] = max(ans.back()[1],i[1]);
    }