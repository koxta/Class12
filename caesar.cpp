#include <iostream>
using namespace std;

int main()
{
  string s;
  cout << "sheitane sitkva: ";
  // getline gamoiyeneba winadadebebis shesakvanad
  getline(cin, s);
  // cin>>s;
  int k;
  cout << "ramdenit gadaiwios? ";
  cin >> k;

  k = k % 26;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == ' ')
    {
      continue;
    }

    if ((s[i] + k) <= 'z')
    {
      s[i] += k;
    }
    else
    {
      s[i] -= (26 - k);
    }
  }
  cout << s;
  return 0;
}
// 3
// a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z

// reziy
// uhcl