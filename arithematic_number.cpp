class Solution{
public:
    int inSequence(int A, int B, int C){
        if((B<A && C>0) || (B>A && C<0)){
            return 0;
        }else if(C==0){
            if(A==B)
                return 1;
            else 
                return 0;
        }
        if((B-A)%C == 0){
            return 1;
        }else{
            return 0;
        }
    }
};
