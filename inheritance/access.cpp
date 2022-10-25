#include <iostream>
using namespace std;

class A{
    //friend can access anything
    private:
        static const int e = 23;
        int aA = 9;
        void aaA(){
            cout <<aA <<" "<<bA<<" "<<cA<<endl;
        }
    protected:
        int bA = 2;
        void bbA(){
            cout <<aA <<" "<<bA<<" "<<cA<<endl;
        }
    public:
        int cA = 8;
        void ccA(){
            cout <<aA <<" "<<bA<<" "<<cA<<endl;
        }

};

class B:private A{
    private:
        int aB = bA + cA+ 99;
        void aaB(){
            //no private accessed
            // aaA(); cout << aA;
            cout <<bA<<" "<<cA<<" "<<aB<<" "<<bB <<" "<<cB <<endl;
        }
    protected:
        int bB = 22;
        void bbB(){
            //no private accessed
            bbA(); //aaA(); cout << aA;
            aaB();
            cout <<bA<<" "<<cA<<" "<<aB<<" "<<bB <<" "<<cB <<endl;
        }
    public:
        int cB = 88;
        
};

class C:protected A{
    private:
        int aC = bA + cA + 999;
        void aaC(){
            //no private accessed
            // aaA(); cout << aA;
            cout <<bA<<" "<<cA<<" "<<aC<<" "<<bC <<" "<<cC <<endl;
        }
    protected:
        int bC = 222;
        void bbC(){
            //no private accessed
            bbA(); //aaA(); cout << aA;
            cout <<bA<<" "<<cA<<" "<<aC<<" "<<bC <<" "<<cC <<endl;
        }
    public:
        int cC = 888;
};

class D: protected C{
    private:
        int aD = bA + cA + bC + cC + 9999;
        void aaD(){
            //no private accessible
            // aaC(); cout << aC;
            bbC();
            bbA();
        }
    protected:
        int bD = 2222;
        void bbD(){
            // aaC(); cout << aC;
            aaD();
            cout <<bA<<" "<<cA<<" "<<bC<<" "<<cC<<" "<<aD <<" "<<bD<<endl;
        }
    public:
        int cD = 8888;
        void ccD(){
            cout <<cD<<endl;
            bbD();
        }
};

/*
private & protected are strictly no different except protected is accessible by its derived class but within its 
own definition & not inside some function outside the class like public.
*/