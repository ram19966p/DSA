# include <iostream>
using namespace std ;
#include <vector>


 vector<int> produArray(vector<int>& nums){
    int  i = 0 , n = nums.size() ;
    int j = 0 , prod = 1 ;
    vector<int> ans(n,1) ;
  for(i , j ; j<n; j++){
    if(i!=j){
        
        prod *= nums[j];

     }
    
    
    ans[i] = prod ;
  }
  
    
    return ans ;
 }
int main()
{
 vector<int> nums ={ 1 ,2 ,3,4} ;
   vector<int> ans =  produArray(nums);
   cout<<"The product of array  :" <<ans[0]<<endl ;
   cout<<"The product of array  :" <<ans[1]<<endl ;
   cout<<"The product of array  :" <<ans[2]<<endl ;
   cout<<"The product of array  :" <<ans[3]<<endl ;


  return 0 ;
}