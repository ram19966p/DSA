# include <iostream>
using namespace std ;
//  void inputArray{
//  int size = 5 ;
//      int marks[size] ;
//      for(int i =0 ; i<size; i++){
//       cin>>marks[i];
        
//      } 
     
//     cout<<sizeof(marks)/sizeof(int) <<endl;
//     for(int i = 0 ; i<=__SIZEOF_INT__; i++){
//         cout<<marks[i]<<endl;
      
        
//     }

//  }


  void findSmallestandLargest(){
     int  smallest =  __INT_MAX__;
     int largest =   __WINT_MIN__ ;
     int index , index1 ; 
    int num[]= { 22 ,71 ,85 ,93,67,-89} ;
    int size = 6;
   
    for(int i =0 ; i<size ; i++){
      // using by a function in cpp to find out esily 
      // ye dono function bae huye hai cpp ke andar me hame keval use  karna hai bas 
      //  smallest = min(num[i],smallest);
      //  largest =max(num[i],largest);
      

      //<*********** To self make a Find out smallest and grestest value in Array **********>
       if(num[i]<smallest){
         smallest = num[i];
        index = i ;
       }else{

       }
        if(num[i]>largest){
             largest = num[i];
              index1 = i ; 
        }else{
        
        }
    }
     cout<<" The smallest value of :"<<smallest<<" and Index is a : "<<index  <<endl;
      cout<<" And the Largest value of"<<largest<< " And Index is a "<<index1 <<endl  ;
  }
   


// Pass by Refrence hai jo keval addrese pe kam karta hai esme keval value ko address pass karek value  pe kam kiya jata hai 
   void passbyRefrence(int arr[], int size ){
    cout<<"Reference function "<<endl ;
             for(int i = 0; i<size ; i++){
              arr[i] = 2*arr[i];
             }
   }


   void linearSearch(){
    int arr[]={11 , 22 , 33 ,44 ,55 ,6, 80};
    int target = 44 ; 
    int index ;
    for(int i = 0 ; i<=6; i++ ){
      if(arr[i]==target){
            index = i ;
           cout<<"   The Target Index is : "<<index ;
            }
       
   }

   }
   void reverseArry(){
    int arr[] ={ 4 , 5, 6, 7, 8, 9} ;
    int sz = 6 ; 
     int val  ; 
    for(int i = sz;   i > 0 ; i-- ){

      for(int j = 0 ; j <= 0 ; j++){
       
        val = arr[i] ;
        arr[i] = arr[j];
        arr[j] = val ; 

         cout<<arr[j] <<" " ;
       
      }
     
    }
    cout<< endl  ;
   }
     
     void revArray(int arr[] , int sz){
      int start = 0 ,  end = sz-1 ;
      while(start<end){
         swap(arr[start], arr[end]);
         start++;
         end--;
      }
     }
   
   
int main()
 { 
//   2.    int arr[] ={ 1 , 2, 3 };
//      int size = 3 ;

//      passbyRefrence(arr , size);
//      cout<<"Mian function  ";
//            for(int j = 0 ; j<size; j++){
//             cout<<arr[j]<<"  " ;
//            }
//            cout<<endl ;



 //1. findSmallestandLargest();

 
//3.  linearSearch() ;
 // 4 .reverseArry();

 int arr[] ={ 4 , 5, 6, 7, 8, 9} ;
    int sz = 6 ; 
     revArray(arr, sz);
     for(int i =0 ; i<sz ; i++){
      cout<< arr[i]<<" ";
     }
    cout<<endl;
   return 0 ;
}