#include <iostream>
using namespace std;

void dabechde(string sitkva)
{
  cout << " ----- " << sitkva << " ----- "<< endl;
}

void printSecret(){
  dabechde("asdasdasdasdasdasdasd");
  dabechde("xinkali");
  dabechde("mwvadi");
}

bool authenticate(string REAL_PASSWORD)
{
  string inp;
  dabechde("sheikvane paroli");
  cin >> inp;
  
  int raodenoba = 0;
  while (inp != REAL_PASSWORD)
  {
    cout<<"cda: "<<raodenoba+1<<endl;
    raodenoba++;

    if (raodenoba == 3)
    {
      dabechde("cda gamogelia");
      return false;
    }

    dabechde("paroli arasworia, scade xelaxla");

    cin >> inp;
  }

  return true;
}

int main()
{
  if (authenticate("kata"))
  {
    printSecret();
  }

  return 0;
}