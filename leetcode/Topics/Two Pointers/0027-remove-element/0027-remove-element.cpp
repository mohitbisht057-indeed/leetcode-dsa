class Solution {
public:
    int removeElement(vector<int>& num, int val) {
        int j =0;
        for( int i=0;i<num.size();i++){
            if(num[i] !=val){
                num[j] = num[i];
                j++;
            }
        }
        return j;
        
    }
};