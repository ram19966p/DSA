# include <iostream>
#include <vector>
using namespace std ;

int containerWater(vector<int>&water){
  int   maxWater =  0 ;
  for(int i = 0 ; i<water.size() ; i++){
    for(int j = i+1 ; j <water.size() ; j++){
        int wirth  = j-i;
        int height = min(water[i] , water[j]);
        int area = wirth * height ;
        maxWater = max(maxWater , area) ;
    }
  }
  return maxWater ;
}



int twoPointerContainer(vector<int>&water){
    int i = 0 ;
    int j = water.size() - 1 ;
     int maxWater = 0 ;
    while (i<j)
    {   
       
       int wirth  = j-i;
        int height = min(water[i] , water[j]);
        int  area = wirth * height ;
       maxWater = max(maxWater , area) ;
        
        water[i]<water[j]  ? i++ : j-- ;
        
    }
    return maxWater ;
    
}
int main()
{

vector<int> water = { 1, 8,6,2,5,4,8,3,7} ;
//int ans = containerWater(water);

int  ans= twoPointerContainer(water);
cout<<"The maximum catainer the water is  :"<< ans<<" Using by 2 pointer approch" << endl ;

  return 0 ;
}