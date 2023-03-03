#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

int returnTotalBill(){

    char toStart; 
    char item;
    char vegItems;
    int billAmount = 0;
    char selectAgain;

    cout << "<<--------------------Welcome to Food Collab-------------------->>" << endl;

    cout << "<<--------------------Please Follow Below Instructions-------------------->>" << endl;

    cout << "Please Press 's' Start Your Order" << endl;

    start:

    cin >> toStart;

    if(toStart == 's' || toStart == 'S'){
        items:

        cout << "You Can Order Both Veg & Non-veg" << endl;
        cout << "Please Press 'a' For Veg Items OR 'b' For Non-veg Item" << endl;

        cin >> item;
        if(item == 'a' || item == 'A'){
            vegItemList:

            cout << "Welcome To The Veg Section Of The Order" << endl;
            cout << "Please Select Your Order By The Help Of Serial Numbers" << endl;
            cout << "Sr. Number                 Items                  Price" << endl;
            cout << "    1              Makhni Paneer Biryani           ₹500" << endl;
            cout << "    2                 Masala Bhindi                ₹100" << endl;
            cout << "    3                 Pommes Gratin                ₹800" << endl;
            cout << "    4               Vegetarian Burritos            ₹600" << endl;
            cout << "    5              Dum Paneer Kali Mirch           ₹350" << endl;

            cin >> vegItems;
            if(vegItems == '1'){
                billAmount+=500;
            }
            else if(vegItems == '2'){
                billAmount+=100;
            }
            else if(vegItems == '3'){
                billAmount+=800;
            }
            else if(vegItems == '4'){
                billAmount+=600;
            }
            else if(vegItems == '5'){
                billAmount+=350;
            }
            else {
                cout << "You Have Enter The Wrong Order Number." << endl;
                cout << "Please Select The Order Number From The List." << endl;
                goto vegItemList;
            }
            cout << "Do You Want To Order More Items, Press(y, n)" << endl;
            cin >> selectAgain;
            if(selectAgain == 'y' || selectAgain == 'Y'){
                goto items;
            }
            else if(selectAgain == 'n' || selectAgain == 'N') {
                return billAmount;
            }
        }
        else if(item == 'b' || item == 'B'){

        }
        else {
            cout << "You Have Pressed Wrong Key!!!" << endl;
            cout << "Please Press 'a' For Veg Items OR 'b' For Non-veg Item" << endl;
            goto items;
        }
    }
    else {
        cout << "You Have Pressed Wrong Key!!!" << endl;
        cout << "Please Press 's' to Start Your Order" << endl;
        goto start;
    }



}