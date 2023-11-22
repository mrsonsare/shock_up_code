#include <iostream>
using namespace std;

int main()
{
  int arry[]={3,6,9,12,14,19,20,23,25,27};
 int k=19;
 int size =sizeof(arry)/aizeof(arr[0]);
 int flag=0;
  for(int i = 0;i<size;i++){
    if(arry[i]==k){
     cout<<"k is present at index :"<<i;
     break; 
    flag=1;
    }
    
  }
  if(flag==0){
  cout<<"\nYaah!,We find it...";
 }
 else {
   cout<<"Opps!,better luck next time";
 }  
  return 0;
}


