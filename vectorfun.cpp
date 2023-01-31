#include "vectorfun.h"

void fillvector(vector<int>&v){
  int num;
  for(int i=0;i<5;i++){
    cout<<"Enter integer: ";
    cin>>num;
    v.push_back(num);
  }
}
void findextremes(vector<int>& v,int& min,int& max){
  //assumes vector has more than one value
  min=max=v.at(0);
  for(int i=0;i<v.size();i++)
  {
    if(v.at(i)<min)
    {
      min=v.at(i);
    }
  
  if(v.at(i)>max)
    {
    max=v.at(i);
    }
  }
}