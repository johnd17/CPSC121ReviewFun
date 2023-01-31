#include "vectorfun.h"
int main() {
  int min,max;
  vector<int>usernums;
  cout << "Hello World!\n";

  fillvector(usernums);
  cout<<"Size: "<<usernums.size()<<endl;
  findextremes(usernums,min,max);
  cout<<"Min: "<<min<<" Max: "<<max<<endl;
}