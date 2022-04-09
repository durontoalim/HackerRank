#include <bits/stdc++.h>

using namespace std;

int main()
{
    char A[100];
    int B, count = 0;

    cin>>A>>B;

    int i = 0;
    while(A[i] != '\0'){
        i++;
        count++;
    }
    cout<<count;

    return 0;
}