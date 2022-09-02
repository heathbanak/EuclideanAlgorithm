//
//  main.cpp
//  Euclidean_Algorithm
//
//  Created by Heath Banak on 8/18/22.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string title = "EUCLIDEAN ALGORITHM";
    int stringLen = title.size();
    int y;
    int x;
    int r;
    int i;
    int finalR = -1;
    
    cout << setw(stringLen + 6) << setfill('=') << "" << endl;
    cout << setw(3) << setfill(' ') << "";
    cout << title;
    cout << setw(3) << setfill(' ') << "" << endl;;
    cout << setw(stringLen + 6) << setfill('=') << "" << endl;
    
    cout << "\nEnter a y value: ";
    cin >> y;
    int initialY = y;
    
    cout << "\nEnter an x value: ";
    cin >> x;
    int initialX = x;
    
    r = y % x;
    
    cout << endl;
    cout << setw(stringLen + 6) << setfill('-') << "" << endl;
    cout << endl;
    
    i = 1;
    
    while (r != 0) {
        cout << "Iteration " << i << ":" << endl;
        cout << "\ty = " << y << endl;
        cout << "\tx = " << x << endl;
        cout << "\ty mod x = " << y << " mod " << x << " = " << r << endl;
        cout << endl;
        cout << "r = " << r << endl;
        cout << endl;
        
        y = x;
        x = r;
        
        r = y % x;
        
        if (r != 0) {
            finalR = r;
        }
        i++;
    }

    cout << setw(stringLen + 6) << setfill('-') << "" << endl;
    cout << endl;
    
    cout << "The GCD of " << initialY << " and " << initialX << " is " << finalR << ".\n" << endl;

    return 0;
}
