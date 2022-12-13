class Solution {
public:
    /*string base(int b){
        int i=1; int store=b%10;
        int count = 0;
        string new_one = "";
        while(b>0){
            if(b%10 == store && b/10 > 0){
                count++;
                b = b/10;
            }else{
                new_one += count;
                new_one += store;
                store = b%10;
                count = 1;
            }
            new_one += count;
            new_one += store;
        }
        return new_one;
    }

    int str_to_num(string str){
        int num = 0;
        for(int i=0; i<str.size(); i++){
            num = num*10 + int(str[i]);
        }
        return num;
    }*/

    string countAndSay(int n) {
       /* if(n==1)
            return "1";

        int a[n];
        a[1] = 1;
        int i =2;
        while(i<n){
            a[i] = str_to_num(base(a[i-1]));
        }
        return base(a[n-1]);
        
    }*/
    string result = "";
    
    if(!n)
        return result;
    
    string str = "1";
    int cnt = 1;
    
    for (int i = 1; i<n; ++i)
    {
        int len = str.length();
        for(int j = 0; j<len; ++j)
        {
            if (j+1 != len && str[j]==str[j+1])
            {
                ++cnt; 
            }
            else
            {
                result += to_string(cnt) + str[j];
                cnt = 1;
            }
        }
        str = result;
        result.clear();
    }
    return str;
    }
};
