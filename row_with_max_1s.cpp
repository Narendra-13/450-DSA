class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int mini = INT_MAX;;
	    int min_ind;
	    int count = 0;
	    for(auto vec : arr){
	       // count++;
	        if((find(vec.begin(), vec.end(), 1)-vec.begin()) < mini){
	            mini = (find(vec.begin(), vec.end(), 1)-vec.begin());
	            min_ind = count;
	        }
	        count++;
	    }
	    if(mini == m){
	        return -1;
	    }
	    return min_ind;
	}
};
