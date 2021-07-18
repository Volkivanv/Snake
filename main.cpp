#include <iostream>
//#include <vector>
//#include <string>
using namespace std;

void massOut( int field[][5]){
    cout << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mass[5][5];
    int element = 0;
    for(int i = 0; i < 5; i++){
        bool even = (i % 2 == 0);
        for(int j = ( even ? 0: 4); (even ? j < 5: j >= 0); (even ? j++ : j--) ){
            cout << i << " " << j << endl;
            mass[i][j] = element;
            element++;
        }
    }
    massOut(mass);
    return 0;
}
