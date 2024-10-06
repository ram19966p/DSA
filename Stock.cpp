# include <iostream>
# include <vector>
using namespace std ;

 int maxProfit(vector<int>&prices) 
 {  int   maxpri = 0 , n  ;
   int bestBuy = prices[0]  ;
    n = prices.size();
   for(int i = 0 ; i<n ; i++){
      if(prices[i] > bestBuy){
        maxpri = max(maxpri,prices[i] - bestBuy) ;
      }
      bestBuy = min(bestBuy,prices[i]);
        
   }
   return maxpri ;



}

int stockBuying(vector<int>&prices){
    int maxpri = 0 ;
    int bestBuy = prices[0];
    int j =1 ;
   for(j  ; j<prices.size(); j++){
      
        if(prices[j]>bestBuy ){
               maxpri += prices[j] - bestBuy ;
            }
                   bestBuy = prices[j];
                
        }
        return maxpri ;
}

int twoTimeBuy(vector<int>&prices){
    ;int maxpri = 0 ;
    int bestBuy = prices[0];
   
    for(int i = 1 ; i < prices.size(); i++){
             if(prices[i]>bestBuy ){
               maxpri += prices[i] - bestBuy  ;
              
            }
              bestBuy = min(bestBuy,prices[i] );
             
    }
    return maxpri ;
}

int main()
{
    vector<int>  price ={3,3,5,0,0,3,1,4} ;
    vector<int> nums = { 1,1,1,2,1,2,2,2,2, 3} ;
//     int  ans = maxProfit(price);
//    cout<<" The maximum profit "<<ans<< endl ;

//   int ans =  stockBuying(price);
 int  ans = twoTimeBuy(price);
   cout<<" The maximum profit "<<ans<< endl ;
 
 return 0 ;
}