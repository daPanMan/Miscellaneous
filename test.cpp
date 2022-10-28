#include <iostream>
#include <string>
using namespace std;
enum dayOfWeek {MON = 1, TUE, WED, THU, FRI, SAT, SUN};
string getDay(dayOfWeek d){
    switch(d){
        case 1:
            return "Monday";
            break;
        case 2:
            return "Tuesday";
            break;
        case 3:
            return "Wednesday";
            break;
        case 4:
            return "Thursday";
            break;
        case 5:
            return "Friday";
            break;
        case 6:
            return "Saturday";
            break;
        case 7:
            return "Sunday";
            break;
    }
}

void enumeration(){
    dayOfWeek day = FRI;
    cout << getDay(dayOfWeek(2)) << endl;
    return;
}

int multiply(int a, int b){
    int c = 0;
    for(int i = 0; i < b; i++){
        c += a;
    }
    return c;
}

class AboveTenException{
    public:
        void Error(){ cout << "the number is over 10." << endl;}
};


int main(){        
    int arr[10] = {0};
    for (int o = 0; o < sizeof(arr); o++)
    {
        cout << arr[o] << endl;
    }
    //int a = (3 > 89) ? 1 : 2;//short hand if
    AboveTenException e;
    int a = 6;
    try{
        a+=12;
        if(a>10){
            throw a;
        }
        cout << "a = " << a << endl;
    }
    catch(int a){
        e.Error();
    }

    for(int i = 0; i < 10; ++i){
        cout << i << endl;
    }

    return 0;
}


