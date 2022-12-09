#include <iostream>

using namespace std;


class rectangle{
    private:
        int w,h;
    public:    
        void input(int wid,int hei){
            w=wid;
            h=hei;
        }
        int area(){
            return w * h;
        }

};

int main()
{
    rectangle r1,r2;
    r1.input(9,5);
    r2.input(3,7);
    cout << "ფართობი r1: " << r1.area() << endl;
    cout << "ფართობი r2: " << r2.area() << endl;

    return 0;
}