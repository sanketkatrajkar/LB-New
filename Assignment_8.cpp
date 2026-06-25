








#include<iostream>
using namespace std;

/*

  Accept the N Redius of circle and calculate the area of circle (Area = PI * redius * redius)
  PI = 3.14
  
  Input : 5.3
  Output : 88.9582

*/

double AreaCirle(float redius)
{
    float PI = 3.14;

    double area = PI * redius * redius;

    return area;

}


/*

  ACcept the nubmer distance in kilometer and convert into the merter (1 = 1000 meter)
  
  Input : 5
  Output : 5000

  Input :  7
  Output : 7000
*/

int Covert(int No)
{
    int meter = 0;

    meter = No * 1000;

    return meter;
}

int main()
{
    float No = 0.0f;

    cout << "Enter the number : " << endl;
    cin >> No;

    double ans = AreaCirle(No);
    cout << "area is : " << ans << endl;

    ans = Covert(No);
    cout << ans;

    return 0;
}