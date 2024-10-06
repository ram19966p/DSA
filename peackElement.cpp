# include <iostream>
# include <vector>
using namespace std ;


int peakIndex(vector<int>& nums ){
    int st = 1 ; 
    int end = nums.size()-1 ;
    while (st<= end )
    {
       
    
    
    int mid = st+(end-st)/2 ;
    if(nums[mid-1] < nums[mid]  && nums[mid] > nums[mid+1]){
         return mid ;
    }
    if(nums[mid-1]< nums[mid]){
        st = mid + 1;
    }else{
        end = mid - 1 ;
    }
    }
}


int main()
{
 vector<int>  nums={0 ,3, 8, 9,5,2} ;
 int ans = peakIndex(nums);
 cout<< "The peak Index is a :"<< ans << endl ;

return 0 ;
}