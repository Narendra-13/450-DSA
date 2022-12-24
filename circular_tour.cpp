class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int i = 0;
       int cnt = INT_MAX;
       int rem = 0;
       while(i<n){
           if((p[i].petrol + rem) >= p[i].distance){
               cnt  = min(i, cnt);
               rem = (p[i].petrol + rem) - p[i].distance;
               i++;
           }else{
               cnt = i+1;
               rem = 0;
               i++;
           }
       }
       i = 0;
       while(i<cnt){
           if((p[i].petrol + rem) > p[i].distance){
            //   cnt  = min(i, cnt);
               rem = (p[i].petrol + rem) - p[i].distance;
               i++;
           }else{
               cnt = n;
               break;
           }
       }
       if(cnt == n){
           cnt = -1;
       }
       return cnt;
    }
};
