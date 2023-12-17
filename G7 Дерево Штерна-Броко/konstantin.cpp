#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    double right[2]={1,0}, left[2]={0,1}, digit[2]={1,1}, n, m;
    cin >> n >> m;
    string stroka;
    while (digit[0] != n || digit[1] != m){
        if (digit[0]/digit[1] > n/m){
            right[0] = digit[0];
            right[1] = digit[1];
            digit[0] += left[0];
            digit[1] += left[1];
            stroka = stroka + "L";

        }
        else{
            left[0] = digit[0];
            left[1] = digit[1];
            digit[0] += right[0];
            digit[1] += right[1];
            stroka = stroka + "R";
        }
    }
    cout << stroka;
    return 0;
}



