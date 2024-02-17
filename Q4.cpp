/*WAP for finding the volume of the cylinder 
 by taking radius and height as input.*/


#include <bits/stdc++.h>
using namespace std;
int main() {
    int r,h;
    cout<<"Enter the radius and";
    cout<<" height of cylinder"<<endl;
    cin>>r>>h;
    int pi=3.14;
    int volume=pi*r*r*h;
    cout<<volume;
    return 0;
}