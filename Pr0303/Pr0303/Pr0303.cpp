#include <iostream>
#include <cmath>  
using namespace std;
int main()
{
    double x;  // вхідний аргумент 
    
    double R;// вхідний параметр     
    double y;  // результат обчислення виразу  
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;          
    // розгалуження в повній формі     
    if (x <= -6 - R)
        y = 0;
    else
        if (-6 - R < x && x <= -6)
            y = sqrt(R * R - pow(x + 6, 2));
        else
            if (-6 < x && x <= -R)
                y = R * (R + x) / (R - 6);
            else
                if (-R < x && x <= 0)
                    y = sqrt(x * x - R * R);
                else
                    if (0 < x && x <= 3)
                        y = R * (1 - 1. / 3 * x);
                    else
                        y = R / 9 * (x - 3);
    cout << endl;     
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}
