string reverseWord(string str){
    string s;
    for(int i=str.size();i>=0;i--){
        s = s + str[i];
    }
    str =s;
    cout<<str;
  //Your code here
}
