# include <iostream>
# include <vector>
using namespace std ;

int binser(vector<int> nums ,  int target ){
     int  left   =  0 ;
     int right  = nums.size() - 1 ;
     int mid  = 0 ;
     while(left <= right ){
        mid = (left + right ) / 2 ;
        if( nums[mid] == target ){
            return  mid ; 
        }else if(  nums[mid] < target ){
            left = mid + 1 ;
        }else{
            right = mid - 1 ; 
        }


      
     }

    return -1 ;
}





int recBinSearch(vector<int> nums , int target , int left , int right ){
    if(left<right){
        int  mid = ( left+right)/2;
        if( nums[mid] == target){
            return  mid ;
        }else if(  nums[mid] < target ){
            return recBinSearch( nums ,  target , mid+1 , right );
        }else{
            return recBinSearch(nums , target , left , mid - 1 );
        }
    }


    return -1  ; 
}





 
int main()
{
 int target =  6 ;
vector<int> nums = { 1,2,3,33,44,56,78,90,98} ;
cout<< "  Enter the number find out " <<  endl ;
cin>>target ;

  //int  ans = binser(nums , target );
  int ans = recBinSearch(nums , target , 0 , nums.size()-1);


  cout<< "  The number is find out "<<ans<<endl ; 

return 0 ;
}