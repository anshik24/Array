int findFrequency(vector<int> v, int x){
unordered_map<int,int>m;
for(auto it:v){
    m[it]++;
    
}
if(m.find(x)!=m.end()){
    for(auto i:m){
        if(i.first==x){
            return m[i.first];
        }
    }
}
return 0;


}
