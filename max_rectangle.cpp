class Solution{
  public:
    /*int maxHist(int row[], int m) { 
        stack<int> result; 
        int top_val;      
        int max_area = 0; 
        int area = 0;    
        int i = 0; 
        while (i < m) 
        { 
            if (result.empty() || row[result.top()] <= row[i]) 
                result.push(i++); 
            else{ 
                top_val = row[result.top()]; 
                result.pop(); 
                area = top_val * i; 
    
                if (!result.empty()) 
                    area = top_val * (i - result.top() - 1 ); 
                max_area = max(area, max_area); 
            } 
        } 
        while (!result.empty()) 
        { 
            top_val = row[result.top()]; 
            result.pop(); 
            area = top_val * i; 
            if (!result.empty()) 
                area = top_val * (i - result.top() - 1 ); 
  
            max_area = max(area, max_area); 
        } 
        return max_area; 
    }*/
    
    int getAns(vector <int> a){
      stack <int> st;
      int i = 0;
      int ans = 0;
      while(i<a.size()){
         if(st.empty()||a[i]>=a[st.top()]){
            st.push(i);
            i++;
         } else{
            int height = a[st.top()];
            st.pop();
            int width = st.empty()?i:i-st.top()-1;
            int area = height * width;
            ans = max(ans,area);
         }
      }
      while(!st.empty()){
         int height = a[st.top()];
         st.pop();
         int width = st.empty()?a.size():a.size() - st.top()-1;
         int area = height * width;
         ans = max(ans,area);
      }
      return ans;
    }
    
    int maxArea(int M[MAX][MAX], int n, int m) {
        /*int result = maxHist(M[0], m); 
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++){
                if (M[i][j]) M[i][j] += M[i - 1][j]; 
                    result = max(result, maxHist(M[i], m));
            }
        } 
        return result;*/
        
    int ans = 0;
    vector <int> height(m);;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(M[i][j] == 1)
                height[j]++;
            else 
                height[j] = 0;
        }
        ans = max(ans, getAns(height));
    }
    return ans;
    }
};
