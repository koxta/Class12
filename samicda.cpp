#include <iostream>
using namespace std;

void dabechde(string sitkva)
{
  cout << sitkva << endl;
  cout << "--------------------" << endl;
}

int main()
{
  string inp;
  dabechde("sheikvane paroli");
  cin >> inp; 

  int raodenoba = 0;
  while (inp != "asd")
  {
    raodenoba++;

    if(raodenoba == 3){
      dabechde("cda gamogelia");
      return 0;
    }

    dabechde("paroli arasworia, scade xelaxla");
    cin>>inp;
  }

  dabechde("saidumlo informacia");

  return 0;
}