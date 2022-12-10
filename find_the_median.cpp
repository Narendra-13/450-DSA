class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    sort(v.begin(), v.end());
		    if(v.size() % 2 == 1){
		        return v[(v.size()-1)/2];
		    }
		    else{
		        int avg = 0;
		        avg = (v[v.size()/2] + v[(v.size()/2) - 1])/2;
		        return avg;
		    }
		}
};
