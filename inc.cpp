#include <iostream>
using namespace std;

class Number
{
    private:
        int num;
    public:
        void getNumber(void)
        {
            cout << "Enter an integer number: ";
            cin  >> num;
        }
        //to return num
        int returnNumber(void)
        { return num; }
};
class Square:public Number
{
    public:
    int getSquare(void)
    {
        int num,sqr;
        num=returnNumber(); //get number from class Number
        sqr=num*num;
        return sqr;
    }
};

class Cube:public Number
{
    private:

    public:
    int getCube(void)
    {
        int num,cube;
        num=returnNumber(); //get number from class Number
        cube=num*num*num;
        return cube;
    }
};
int main()
{
        Square objS;
        Cube objC;
        int sqr,cube;

        objS.getNumber();
        sqr =objS.getSquare();
        cout << "Square of "<< objS.returnNumber() << " is: " << sqr  << endl;

        objC.getNumber();
        cube=objC.getCube();
        cout << "Cube   of "<< objS.returnNumber() << " is: " << cube << endl;

        return 0;
}

