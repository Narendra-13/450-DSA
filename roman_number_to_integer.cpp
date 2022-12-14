class Solution {
  public:
    int romanToDecimal(string &str) {
        int count = 0;
        int i=0;
        while(i<str.size()){
            if(str[i] == 'M'){
                count += 1000;
            }else if(str[i] == 'C' && (i+1) < str.size() && str[i+1] =='M'){
                i += 1;
                count += 900;
            }else if(str[i] == 'C' && (i+1) < str.size() && str[i+1] == 'D'){
                i += 1;
                count += 400;
            }else if(str[i] == 'D'){
                count += 500;
            }else if(str[i] == 'C'){
                count += 100;
            }else if(str[i] == 'X' && (i+1) < str.size() && str[i+1] == 'C'){
                i += 1;
                count += 90;
            }else if(str[i] == 'X' && (i+1) < str.size() && str[i+1] == 'L'){
                i += 1;
                count += 40;
            }else if(str[i] == 'X'){
                count += 10;
            }else if(str[i] == 'L'){
                count += 50;
            }else if(str[i] == 'I' && (i+1) < str.size() && str[i+1] == 'X'){
                i += 1;
                count += 9;
            }else if(str[i] == 'I' && (i+1) < str.size() && str[i+1] == 'V'){
                i += 1;
                count += 4;
            }else if(str[i] == 'V'){
                count += 5;
            }else{
                count += 1;
            }
            i += 1;
        }
        return count;
    }
};
