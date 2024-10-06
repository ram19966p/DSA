# include <iostream>
#include<vector>
using namespace std ;



int search(vector<int> nums, int tar){
int n = nums.size() ;
int st = 0  ;
int mid = 0 ;
while (st<=n){
    mid = (st+n)/2 ;
 if(tar>nums[mid]){
          st = mid+1 ;
 }else if(tar<nums[mid]){
    n = mid-1;
 }else{
        return mid ;
 }
}
 return -1 ;

}


int recBinearySearch(vector<int> arr ,int  tar , int st , int end ){
    if(st<=end){
    int mid = st + (end-st)/2 ; 

    if(tar >arr[mid]){
        return recBinearySearch(arr , tar , mid+1 , end );

    }else if(tar < arr[mid]){
        return  recBinearySearch(arr , tar,st , mid-1 );

    }else{
        return mid  ; 
    }
}
   return -1 ;
}



int main()
{
 
//  vector<int> nums = {-1 ,0 ,3,4,5,6,9,12} ;
  int tar1 = 10  ;
  vector<int> nums1 = {-1 ,0 ,3,4,5,6,9,12} ;
//  int tar = 0  ;
//  int ta = 10 ;
//  int ans =  search(nums1 , ta);
  //int ans =  recBinearySearch(nums1 , tar1);
 int st = 0 ;
 int end = 8 ;
 cout<<" The target is a thish value : "<< recBinearySearch(nums1 , tar1 ,  st ,  end )<< endl ;

return 0 ;
}