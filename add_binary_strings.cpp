class Solution{
public:	
    /*int sum(int a, int b, int c){
        if((a+b+c == 0) || (a+b+c == 2))
            return 0;
        else
            return 1;
    }
    int carry(int a, int b, int c){
        if((a+b+c == 2) || (a+b+c == 3))
            return 1;
        else 
            return 0;
    }*/
	string addBinary(string A, string B)
	{/*
	    
	    vector <int> a;
	    vector <int> b;
	    vector <int> vec;
	    for(int i=0; i<A.size(); i++)
	        a.push_back(A[i] - '0');
	    for(int i=0; i<B.size(); i++)
	        b.push_back(B[i] - '0');
	    int i= a.size()-1, j = b.size()-1;
	    int car = 0;
	    while(i>=0 && j>=0){
	        vec.push_back(sum(a[i],b[j],car));
	        car = carry(a[i], b[j], car);
	        --i;--j;
	    }
	    if(i !=j){
	        while(i>=0){
	            vec.push_back(sum(a[i], 0, car));
	            car = carry(a[i], 0, car);
	            --i;
	        }
	        while(j>=0){
	            vec.push_back(sum(0, b[j], car));
	            car = carry(0, b[j], car);
	            --j;
	        }
	    }
	    if(car == 1){
	        vec.push_back(car);
	    }
	    string new_one = "";
	    j = vec.size()-1;
	    while(j>=0){
	        if(vec[j] == 0)
	            j--;
	        else
	            break;
	    }
	    for(int i=j; i>=0; --i)
	        new_one = new_one + char(vec[i] + '0');
	    return new_one;*/
	    
	    int carry = 0;
	    string a = A;
	    string b = B;
	    reverse(a.begin(), a.end());
	    reverse(b.begin(), b.end());
	    
	    int i = 0;
	    int j = 0;
	    string ans = "";
	    
	    while(i < a.length() || j < b.length())
	    {
	        int val1 = (i < a.length() ? a[i] - '0' : 0);
	        int val2 = (j < b.length() ? b[j] - '0' : 0);
	        int sum = val1 + val2 + carry;
	        if(sum >= 2){
	            carry = 1;
	            sum = sum%2;
	        }else{
	            carry = 0;
	             
	        }
	        ans += to_string(sum);  
	        if(i < a.length()) i++;
	        if(j < b.length()) j++;
	    }
	    
	    if(carry > 0){
	        ans += to_string(carry);
	    }
	    reverse(ans.begin(), ans.end());
	    int m = 0;
	    for(; m < ans.length(); m++){
	        if(ans[m] != '0'){
	            break;
	        }
	    }
	    return ans.substr(m);
	}
};
