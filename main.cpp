#include <bits/stdc++.h>
using namespace std;

int returnTotalBill(){

    char toStart; 
    char item;
    char vegItems;
    char NonVegItems;
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

            cin >> NonVegItems;
            if(NonVegItems == '1'){
                billAmount+=500;
            }
            else if(NonVegItems == '2'){
                billAmount+=100;
            }
            else if(NonVegItems == '3'){
                billAmount+=800;
            }
            else if(NonVegItems == '4'){
                billAmount+=600;
            }
            else if(NonVegItems == '5'){
                billAmount+=350;
            }
            else {
                cout << "You Have Enter The Wrong Order Number." << endl;
                cout << "Please Select The Order Number From The List." << endl;
                goto vegItemList;
            }
            cout << "Do You Want To Order More Items, Press(y, n)" << endl;
            selectAgainList:
            cin >> selectAgain;
            if(selectAgain == 'y' || selectAgain == 'Y'){
                goto items;
            }
            else if(selectAgain == 'n' || selectAgain == 'N') {
                return billAmount;
            }
            else {
                goto selectAgainList;
            }
        }
        else if(item == 'b' || item == 'B'){
            NonVegItemList:

            cout << "Welcome To The Non-veg Section Of The Order" << endl;
            cout << "Please Select Your Order By The Help Of Serial Numbers" << endl;
            cout << "Sr. Number                 Items                  Price" << endl;
            cout << "    1                Hyderabadi Biryani            ₹500" << endl;
            cout << "    2                    Laal Maas                 ₹100" << endl;
            cout << "    3                   Fish Tenga                 ₹800" << endl;
            cout << "    4                Chicken Kolhapuri             ₹600" << endl;
            cout << "    5                   Bhapa Ilish                ₹350" << endl;

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
                goto NonVegItemList;
            }
            cout << "Do You Want To Order More Items, Press(y, n)" << endl;
            selectAgainLists:
            cin >> selectAgain;
            if(selectAgain == 'y' || selectAgain == 'Y'){
                goto items;
            }
            else if(selectAgain == 'n' || selectAgain == 'N') {
                return billAmount;
            }
            else {
                goto selectAgainLists;
            }
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

    return billAmount;
}

int returnTotalBill(void);

int main()
{
    int totalBill = returnTotalBill();
    cout << "Your Total Bill Amount Is: " << totalBill << endl;
    cout << "Thank You For Visiting" << endl;
    cout << "Enjoy Your Meal!!!" << endl;

    return 0;
}