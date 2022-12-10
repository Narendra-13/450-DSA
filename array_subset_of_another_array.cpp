string isSubset(int a1[], int a2[], int n, int m) {
    vector <int> set1;
    // unordered_set <int> set2;
    bool val = true;
    for(int i=0; i<n; i++){
        set1.push_back(a1[i]);
    }
    for(int i=0; i<m; i++){
        if(find(set1.begin(), set1.end(), a2[i]) == set1.end()){
            val = false;
            break;
        }else{
            set1.erase(find(set1.begin(), set1.end(), a2[i]));
        }
    }
    if(val == false){
        return "No";
    }else{
        return "Yes";
    }
}
