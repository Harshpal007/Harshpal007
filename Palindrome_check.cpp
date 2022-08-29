#include<iostream>
#include<bits/stdc++.h>

using namespace std;


bool check(vector<char>vc)
{
  int count=1;
  auto it1=vc.begin(),it2=vc.end()-1;
  do{
      if(*it1==*it2) count++;
      else return false;

      it1++;
      it2--;
  }while(it1!=vc.end()&&it2!=vc.begin());
  if(count==vc.size())
  return true;

  return false;
}

int main()
{
  vector<char> v;
  int N;
  cin>>N;
  char c;
  for(int i=0;i<N;i++)
  {
    cin>>c;
    v.push_back(c);
  }
  cout<<check(v);
  return 0;
}
