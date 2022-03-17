// #include<iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;


int main(){
    system("cls");
    int sum ,a;
    //cin>>sum;
    vector<int> gain = {-5,1,5,0,-7};
    vector<int> summed;

    for(int i=0; i<gain.size(); i++){
        sum =+ gain[i];
        summed.push_back(sum);
    }
    
    sort(summed.begin(), summed.end());
    for (int x : summed)
        cout << x << " ";
}