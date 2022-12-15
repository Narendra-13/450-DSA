int start0(string S){
    int count = 0;
    int n = 0;
    while(n<S.size()){
        // int n =0;
        if(n%2==0 && S[n] != '0'){
            count++;;
        }else if(n%2 == 1 && S[n] != '1'){
            count++;
        }
        n++;
    }
    return count;
}

int start1(string S){
    int count = 0;
    int n =0;
    while(n < S.size()){
        if(n%2 == 0 && S[n] != '1'){
            count++;
        }else if(n%2 == 1 && S[n] != '0'){
            count++;
        }
        n++;
    }
    return count;
}

int minFlips (string S)
{
    return min(start0(S), start1(S));
}
