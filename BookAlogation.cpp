# include <iostream>
#include<vector>
using namespace std ;

bool  isValid(vector<int> nums , int n , int m , int  maxallowed ){ // maximumallowed  = mid 
 int student  = 1 , pages = 0 ;
    for(int  i = 0 ; i< n ; i++){  // O(n)
            if( nums[i]  > maxallowed){
                return  false  ;
            }

            if( pages  + nums[i] <= maxallowed){
                pages  += nums[i];
            }else{
                student++ ;
                pages = nums[i];
            }
    }

    if(student >  m  ){
      return   false  ;
    }else{
     return true ;
    }
}





 int bookAlogation(vector<int>&nums , int n ,int   m  ) {  // overall o(logN * n) 
 if(m > n){
    return -1 ;
 }

    int sum = 0 ; 
    for( int   i = 0 ; i<n ; i++){  // O(n)
        sum += nums[i];

    }
     int  ans = -1 ;
     int st = 0 ,   end = sum ;
     while(st <= end ){  // o(logN) range in book 
        int mid = st+(end-st)/2 ;
       if( isValid(nums , n  , m , mid)){
             ans = mid ;
         end = mid - 1 ;
     
       }else{
            st = mid + 1 ;
       } 

     }
   return  ans ;

 }




int main()
{
 vector <int> nums  ={ 1, 10 , 3,3,3 };
 int n =  4 ;
 int m = 2 ;
 int ans = bookAlogation(nums , n , m);
 cout<<"The maximum number of book pages ditribut  "<<ans<< endl ;

return 0 ;
}