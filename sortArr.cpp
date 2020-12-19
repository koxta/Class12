// masivis dalageba zrdadobit

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int masivi[n];

  int i = 0;
  while (i < n)
  {
    cin >> masivi[i];
    i++;
  }

  sort(masivi, masivi + n);

  i = 0;
  while (i < n)
  {
    cout << masivi[i] << ", ";
    i++;
  }
  cout << endl;

  return 0;
}
