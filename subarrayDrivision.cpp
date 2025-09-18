int birthday(vector<int> s, int d, int m) {
    if(m>s.size()){
        return 0;
    }
    
    int sum=0;
    int found =0;
    
    for(int i=0;i<m;i++){
        sum += s[i];
    }
    if(sum ==d){
        found++;
    }
    for(int i=m;i<s.size();i++){
        sum += s[i] - s[i-m];
        if(sum==d){
            found++;
        }
    }
    return found;
}