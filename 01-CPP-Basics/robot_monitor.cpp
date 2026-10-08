#include <iostream>
#include <vector>
using namespace std;

struct Robot {
    int id;
    int hp;
    int battery;
};

int main() {
    vector<Robot> s;
    int N, x, y, z;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y >> z;

        s.push_back({x,y,z});

       cout<<s[i].id<<' ';

        if(s[i].hp<=0){
cout<<"DESTROYED"<<endl;
}else if(s[i].battery<20){
cout<<"LOW_BATTERY"<<endl;

}else{
cout<<"NORMAL"<<endl;
}
    }

    return 0;
}