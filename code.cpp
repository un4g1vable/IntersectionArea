#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double a1x, a1y, a2x, a2y;
  double b1x, b1y, b2x, b2y;

  cout << "Первый прямоугольник: ";
  cin >> a1x >> a1y >> a2x >> a2y;

  cout << "Второй прямоугольник: ";
  cin >> b1x >> b1y >> b2x >> b2y;

  double peresechenieX = min(a2x, b2x) - max(a1x, b1x);
  double peresechenieY = min(a2y, b2y) - max(a1y, b1y);

  if (peresechenieX <= 0 or peresechenieY <= 0)
    cout << "нет пересечения";
  else
  {
    double S = peresechenieX * peresechenieY;

    cout << "площадь пересечения: " << S << endl;
  }
}
