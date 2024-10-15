# include <iostream>
#include<vector>
using namespace std ;

int  kelement(int nums[] , int k ){
       
    int space  = 0 ;
    int ans = 0 ;
  for(int i =0 ; i< k ; i++){

    if(nums[i]<nums[i+1] ){
      space = space + nums[i+1] ;
      cout<<space<<" hhh "<<endl ;
      nums[i+1] = nums[i+1] / 3 ;
     }
   
  }
    
     return space ;
 
}
void printarr(int nums[]){
    for( int  i= 0 ; i< 5 ; i++ ){
        cout<<nums[i]<< endl ; 
    }

}

int main()
{

     int nums [] ={1, 10 , 3,3,3  };
            int nums1 [] ={10, 10 , 10,10,10  };
     int  k = 3 ;
     int ans = kelement(nums, k ) ;
     printarr(nums) ;
     cout<<" The Element total is : "<<ans << endl ; 
return 0 ;
}