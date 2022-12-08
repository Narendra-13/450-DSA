class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int zeros=0, ones=0, twos=0;
        for(int i=0; i<n; i++){
            if(a[i] == 0)
                zeros++;
            else if(a[i] == 1)
                ones++;
            else
                twos++;
        }
        int s = zeros + ones;
        for(int i=0; i<zeros; i++)
            a[i] = 0;
        for(int i=zeros; i<s; i++)
            a[i] = 1;
        for(int i=s; i<n; i++)
            a[i] = 2;
        
    }
};
