#include <iostream>
using namespace std;

void fastExpo(int num, int expo)
{
    int ans = 1;

    while(expo > 0) {

        int bit =  expo & 1;

        if(bit) {
            ans *= num;
        }  
            
        num *= num;
        expo = expo >> 1;

    }
    cout << ans;

     
}

int main()
{
    fastExpo(3, 5);

    return 0;
}