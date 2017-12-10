
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {

    cout << "Koeffizienten von ax2+bx+c=0 : " << endl;
    
    double a;
    cout << "a = " << flush;
    cin >> a;
    
    double b;
    cout << "b = " << flush;
    cin >> b;
    
    double c;
    cout << "c= " << flush;
    cin >> c;
    
    double n;
    double m;

    n = ( 0 - b + (sqrt(b*b-4*a*c)))/(2*a);
    m = ( 0 - b - (sqrt(b*b-4*a*c)))/(2*a);
    
    cout << "erste Nullstelle: " << n << endl;
    cout << "zweite Nullstelle: " << m << endl;
    
    
    return 0;
}
