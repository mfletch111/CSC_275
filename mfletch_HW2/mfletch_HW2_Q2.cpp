#include <iostream>
using namespace std;


struct Check { //check struct with  appropriate data types for components
    int CheckNum;
    string CheckMemo;
    float CheckAmount;

    bool operator>(float amount2) const { // compare CheckAmount to second variable(amount2)
        return CheckAmount > amount2;
    }
    friend ostream& operator<<(ostream& os, Check& c) { // print all details in one line
        os << c.CheckNum << " " << c.CheckMemo << " " << c.CheckAmount;
        return os;
    }
};
class CheckBook {
public:
    //constructors
    CheckBook():balance(0), numOfChecks(0), checkBookSize(4){ chkPtr = new Check[checkBookSize]();} //default constructor
    CheckBook(float initbalance): balance(initbalance), numOfChecks(0), checkBookSize(2){chkPtr=new Check[checkBookSize]();}
    //copy constructor
    CheckBook (const CheckBook &copy) : balance(copy.balance), lastDeposit(copy.lastDeposit), numOfChecks(copy.numOfChecks), checkBookSize(copy.checkBookSize), chkPtr(copy.chkPtr){}

    ~CheckBook(){delete[]chkPtr;} //deconstructor

    //get functions
    float getB() {return balance;}
    float getLP(){return lastDeposit;}
    int getNOC(){return numOfChecks;}
    float getCBS(){return checkBookSize;}

    //set functions
    void setB(float b){balance=b;}
    void setLP(float lp){lastDeposit=lp;}
    void setNOC(int noc){numOfChecks=noc;}
    void setCBS(float cbs){checkBookSize=cbs;}

    //overloaded operator
    CheckBook& operator=(const CheckBook &copy) {
        if (this != &copy) {
            numOfChecks = copy.numOfChecks;
            lastDeposit = copy.lastDeposit;
            checkBookSize = copy.checkBookSize;
            balance=copy.balance;
            chkPtr=copy.chkPtr;
        }
        return *this;
    }
    //deposit function
    void deposit(float amount) {
        balance += amount;
        lastDeposit = amount;
    }
    bool writeChek(Check c_amount) {
        if (c_amount.CheckAmount <= balance) {//checking if amount is less than balance
            string memos[]= {"wedding", "baby shower", "pizza", "girl scouts", "landscaping", "college", "hair stylist","work"};
            int randomMemo= rand() % 8; //randomly selected memo

            //getting details for memo
            c_amount.CheckMemo = memos[randomMemo];
            c_amount.CheckNum = numOfChecks++;

            if (numOfChecks>=checkBookSize/2) { // new checkbook if half the checkbook is used
                int newSize =checkBookSize *2;
                Check* newCheckPter = new Check[newSize];
                for (int i = 0; i < checkBookSize; i++) {
                    newCheckPter[i] = chkPtr[i];
                }
                delete[] chkPtr;
                chkPtr = newCheckPter;
                checkBookSize = newSize;

                cout << "warning a new checkbook has been ordered"<<endl;
            }
            chkPtr[numOfChecks]= c_amount;
            balance -= c_amount.CheckAmount;
            return true;
        }else {
            return false;
        }
    }
    void displayChecks() {
        for (int i = numOfChecks-1; i>=0; i--) {
            cout << chkPtr[i] << endl; //overloaded operator
        }
    }


private: //data members + types
    float balance;
    Check* chkPtr; //pointer to Check struct
    float lastDeposit;
    int numOfChecks;
    float checkBookSize;
};
void checkTest(CheckBook &test, float initialbalance) {
    test.deposit(initialbalance);
    float checkAmount = 500000;
    while (test.getB() > checkAmount) {
        Check newCheck;
        newCheck.CheckAmount = checkAmount;
    }
    test.displayChecks();
}
int main() {
    CheckBook myCheckBook(100);
    checkTest(myCheckBook, 100);
    return 0;
}