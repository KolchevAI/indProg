#include <iostream>
#include <ctime>
#include "osb.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    
    Ocean ocean1("Атлантический океан", 91660000, 8742);
    cout << ocean1 << endl;
    Ocean ocean2;
    cin >> ocean2;
    cout << ocean2 << endl;
    
    Sea sea1("Средиземное море", 2500000, 1500);
    cout << sea1 << endl;
    Sea sea2;
    cin >> sea2;
    cout << sea2 << endl;
    
    Bay bay1("Бискайский залив", 223000, 4735);
    cout << bay1 << endl;
    Bay bay2;
    cin >> bay2;
    cout << bay2 << endl;
    return 0;
}
