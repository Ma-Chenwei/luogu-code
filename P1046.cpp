#include <iostream>

using namespace std;

int main()
{
    int in1,in2,in3,in4,in5,in6,in7,in8,in9,in0;
    cin >> in1 >> in2 >> in3 >> in4 >> in5 >> in6 >> in7 >> in8 >> in9 >> in0;
    int ins1;
    cin >> ins1;
    int out;
    if (in1 <= ins1 + 30){
        out++;
    }
    if (in2 <= ins1 + 30){
        out++;
    }
    if (in3 <= ins1 + 30){
        out++;
    }
    if (in4 <= ins1 + 30){
        out++;
    }
    if (in5 <= ins1 + 30){
        out++;
    }
    if (in6 <= ins1 + 30){
        out++;
    }
    if (in7 <= ins1 + 30){
        out++;
    }
    if (in8 <= ins1 + 30){
        out++;
    }
    if (in9 <= ins1 + 30){
        out++;
    }
    if (in0 <= ins1 + 30){
        out++;
    }
    cout << out << endl;
    return 0;
}