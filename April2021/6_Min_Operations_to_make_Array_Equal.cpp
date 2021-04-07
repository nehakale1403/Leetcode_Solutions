class Solution {
public:
    int minOperations(int n) {
        int sum = n*n;
        int target = sum/n;
        int arr[target];
        int ans=0;
        for(int i=0; i<target/2; i++){
                arr[i]=(2*i)+1;
                if(n%2==0){
                    ans=ans+arr[i];    
                }else{
                    ans=ans+arr[i]+1;
                }        
        }  
        return ans;
    }
};