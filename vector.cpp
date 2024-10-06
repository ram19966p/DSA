# include <iostream>
#include <vector>
using namespace std ;

void pushBack(){
  vector<int>vec;
  vec.push_back(33);
   vec.push_back(45);
    vec.push_back(88);
    for(int i :vec){
      cout<<i<<endl;
    }
   cout<<"size__" <<vec.size() <<endl;

}


void popBack(){
 
  vector<int>vec = { 12 , 34 , 56 , 78, 88};
  
    cout<<vec.front()<<" I am a Front Of A VECTOR :" <<endl;
   cout<<"size__" <<vec.size() <<endl;
    cout<<vec.back()<<" I am a  Last  Of A VECTOR :" <<endl;
     vec.pop_back();
     cout<< vec.at(3)<<" I a at Function :"<<endl ;
   for(int i :vec){
      cout<<i <<endl;
      
    }
    cout<<"size__" <<vec.size() <<endl;
}


void size(){

    vector<int> vec = { 1, 2 , 3 } ;
    vector<char> ve ={ 'e','t','y','u'};
    
    cout<<"size__" <<vec.size() <<endl;
   for(char i : ve){  // for each loop  using by a vector 
    cout<<  i <<endl ;
   } 
}

void vectmem(){
  vector<int>vec;
  vec.push_back(0);
   vec.push_back(1); 
   vec.push_back(2);
   vec.push_back(3);
    vec.push_back(4);
  cout<<vec.size()<<" Size  is a vector " <<endl;
 cout<<vec.capacity()<<" Capacity is a vector " <<endl;
}


// probleam is  a Single n umber 
void singleNum(){
  int arr[] ={ 1, 2,2,2,} ;
  int val = 0;
  for(int i =0 ; i<4; i++){
          if(i!=val){
            val = arr[i] ;
          }else{

          }
  }
  cout<<val<<" I am a val value "<< endl ; 
}

void lineSearch(){
  vector<int>vec = { 1, 2, 3, 4, 5, 6};
  int  target  = 3 ; 
  for(int i : vec){
   if(vec[i] == target){
      cout<<"  Find the Element in target value Index is "<<i<<endl ;
   }
 }
}

void singleNUm(){
  
}
int main()
{
 // pushBack();
  //popBack();
 //vectmem();
 //singleNum();
 lineSearch();
  return 0 ;
} 