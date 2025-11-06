#include <iostream>
using namespace std;
int findmin(int a[], int n) {
    int min = a[0];
    for(int i=1;i<n;i++) {
        if (a[i]<min)
            min = a[i];
    }
    return min;
}

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
    cout << "Minimum = " << findmin(a,n)<<endl;


    return 0;
}
