string buildLowestNumber(string num, int k)
{
    if(k==0)
        return num;
    if(k >= num.size())
        return "0";
    
    vector <int> vec;
    for(int i=0; i<num.size(); i++){
        vec.push_back(num[i]-'0');
    }
    int size = num.size();
    int i=0, j=0;
    while(i<k && j<(size-1)){
        if(vec[j] > vec[j+1]){
            vec.erase(vec.begin() + j);
            ++i;
            size--;
            j--;
        }
        else{
            j++;
        }
    }
    while(i<k){
        vec.erase(--vec.end());
        i++;
    }
    int track = 0;
    string new_one = "";
    j=0;
    while(vec[j] == 0 && j<vec.size()){
        // new_one += char(vec[0] + '0');
        // track += vec[0];
        j++;
    }
    for(int i=j; i<vec.size(); i++){
        new_one += char(vec[i] + '0');
        track += vec[i];
    }
    if(track == 0){
        return "0";
    }
    return new_one;
}
