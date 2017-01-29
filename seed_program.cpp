#include<iostream>

using namespace std;

int prod(int k)
{
  int res=k;
  while(k!=0){
    res*=k%10;
    k/=10;
  }
  return res;
}

int main(){
  int k;
  cin >> k;

  for(int i=1;i*i<=k;++i){
    if(k%i==0){
      if(prod(i)==k)
        cout << i << endl;
      if(k/i!=i && prod(k/i)==k)
        cout << k/i << endl;
    }
  }
}
