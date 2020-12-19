#include <iostream>
#include <math.h>
using namespace std;

float calculateArea(float a, float b, float c)
{
  float s = (a + b + c) / 2;

  float namravli = s * (s - a) * (s - b) * (s - c);

  return sqrt(namravli);
}

int main()
{
  float a, b, c;
  cin >> a >> b >> c;

  float d, e, f;
  cin >> d >> e >> f;

  cout << calculateArea(a, b, c) + calculateArea(d, e, f) << endl;

  return 0;
}
