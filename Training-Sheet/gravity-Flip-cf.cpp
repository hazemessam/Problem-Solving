#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector <int> cubes(size);
    for(int i=0 ; i<size ; i++)
        cin>> cubes[i];
    for(int i=0 ; i<size-1 ; i++)
        for(int j=i+1 ; j<size ; j++)
            if(cubes[i] > cubes[j])
                swap(cubes[i], cubes[j]);  
    for(int i=0 ; i<size ; i++)
        cout<< cubes[i] << ' ';
}
