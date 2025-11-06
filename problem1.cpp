#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Number of numbers"<<endl;
    cin >> n;
    int a[n],sum=0;
    cout<<"Enter numbers"<<" ";
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum+=a[i];

    }
    cout<<" Sum "<<sum<<endl;




return 0;
}
