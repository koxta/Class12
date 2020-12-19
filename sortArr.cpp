// masivis dalageba zrdadobit

#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[], int size)
{
  int i = 0;
  while (i < size)
  {
    cout << arr[i] << ", ";
    i++;
  }
  cout << endl;
}

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

  // dalagebamde
  printArr(masivi, n);

  sort(masivi, masivi + n);

  // dalagebis shemdeg
  printArr(masivi, n);

  return 0;
}
