#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int arr[a][b];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            int input;
            cin >> input;
            arr[i][j] = input;
        }
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            int input;
            cin >> input;
            arr[i][j] += input;
        }
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}