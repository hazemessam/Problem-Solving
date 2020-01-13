#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size, s_score=0, d_score=0;
    cin>> size;
    vector<int> cards(size);
    for(int i=0 ; i<size ; i++)
        cin>> cards[i];
    int l_pointer=0, r_pointer=size-1;
    for(int i=0 ; i<size ; i++)
        if(i%2 == 0)
            if(cards[l_pointer]>cards[r_pointer])
            {
                s_score+=cards[l_pointer];
                l_pointer++;
            }
            else
            {
                s_score+=cards[r_pointer];
                r_pointer--;
            }
        else if(i%2 == 1)
            if(cards[l_pointer]>cards[r_pointer])
            {
                d_score+=cards[l_pointer];
                l_pointer++;
            }
            else
            {
                d_score+=cards[r_pointer];
                r_pointer--;
            }
    cout<< s_score <<' '<< d_score <<endl;
}