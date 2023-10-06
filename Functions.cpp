// Functions in cpp
// a Function is a set of input that do a specific task or work
// it only runs when it is called for functioning

// Driver Code 
#include<bits/stdc++.h>
using namespace std;

void max(int x, int y){
    if(x > y){
        cout << x << " is the greater than " << y << endl;
    }
    else if(x == y){
        cout << x << " and " << y << ", Both are equal" << endl;
    }
    else {
        cout << y << " is the greater than " << x << endl;
    }
}
int main(){
    int x ;
    int y ;
    cout << "Enter value of x and y : ";
    cin >> x >> y ;
    max(x,y);

}