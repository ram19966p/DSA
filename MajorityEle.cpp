# include <iostream>
# include <vector>
#include <algorithm> 
using namespace std ;

void pairSum(){ //O(n^2)
// thish is a brute force approch   
 vector<int> nums = { 2, 7, 11, 13};
 vector<int> ans ; 
 int target  = 13 ; 
 for(int  i = 0 ; i < 4 ; i ++){
    for(int j = i+1 ; j < 4 ; j++){
        if(  nums[i] + nums[j] == target){
           ans.push_back(i);
           ans.push_back(j);
           cout<<"The Pair of Element in the target is : " <<ans[0]<<" , "<< ans[1] <<endl ;

        }

    }
 }
}

// using by only shorted arry only 
vector<int>  pairSum1(vector<int> nums , int target){ //O(n)
        
    vector<int>ans ; 
    
    int n = nums.size();
     int  i = 0 , j = n-1 ;
     while(i<j){
        int pair = nums[i] + nums[j]  ;
         if(pair > target){
            j-- ;

         }else if(pair < target){
            i++ ;
         }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans ; 
         }

     }
     return ans ;
}

 int  majorityEl(vector<int> nums ){ //O(n^2)
    int  n ,ret,freq ; 
     n = nums.size();
  
     for(int val : nums){
       freq  = 0  ;
      
        for(int el : nums){
            if(el==val){
                freq++;
                 ret = el ;
                 cout<<freq<<el<<val ;   
            }
             
        }
       
  
     }
      
     if(freq >n/2){
             cout<<n<<" value "  <<endl ;
            return ret ;  
        }
 }
  
 

 int  mooreVotingAlgo(vector<int> nums ){
    int n = nums.size();
      int freq  = 0  , ans = 0 ;
      for(int i = 0 ; i< n ; i++){
           if(freq == 0){
            ans =nums[i] ;
           }
           if(ans==nums[i]){
            freq++ ;
           }else{
            freq--  ;
           }
            
           
      }
      return ans ;
      cout<<ans<<" The majority Element is :" << endl ;
  }

int main()
{
vector<int> nums = { 1,1,1,2,1,2,2,2,2, 3} ;
int target =  6 ; 

// vector<int>ans =  pairSum1(nums, target ) ;
// cout<< "The Pair of Linear Time coplexcity "<< ans[0] << " , "<< ans[1] << endl ;


//  int  ans  =   majorityEl(nums);
//  cout<<" The Majortiy Element is "<<" "<<ans<<endl ;
     

      int  ans=  mooreVotingAlgo(nums);
       cout<<" The Majortiy Element is "<<" "<<ans<<endl ;
 return 0 ;
}