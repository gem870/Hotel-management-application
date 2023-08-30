

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>


using namespace std;


string  dortLine = "  ....................  ",
longDashLesft = "---------------->>> ",
longDashRight = " <<<----------------",
shortDashLesft = "------>> ",
shortDashRight = " <<------",
greaterThan = ">> ",
lessThan = " <<",
shortStars = " ******************* ",
longStars = "*****************************************************************************",
longQualTo = "=========================================================";


// --------------- my class -----------<
class hetelManagement {
public:
    //  quantity of items
    int Qrice = 0, Qbeans = 0, Qchicken = 0, Qnoodles = 0, Qbeef = 0;
    // total price of items
    int price_rice = 0, price_beans = 0, price_chicken = 0, price_noodles = 0, price_beef = 0;
    //quanity of item sold.
    int Srice = 0, Sbeans = 0, Schicken = 0, Snoodles = 0, Sbeef = 0;
    int executiveRooms = 0, rooms = 0, price_eRooms = 0, price_nRoom = 0;
    int demand1 = 0, demand2 = 0, demand3 = 0, demand4 = 0, demand5 = 0, demand6 = 0, demand7 = 0;


// ---------------------<< check input function>>-----------
    int validate() {
        int number;
        while (!(cin >> number)) {
            cout << " ......... ?? Invalid operation..!! " << endl;
            cout << shortDashLesft << " pls choose number from the option: ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        return number;
    }
//------------ << function or adding food availabel to the menu >>-----------------
    void addFoodItems() {
        system("cls");
        cout << endl << endl;
        cout << longDashLesft << "Food Store" << longDashRight << endl;
        cout << shortDashLesft << "Please enter the quantities of food items." << endl << endl;
        cout << greaterThan << "Rice    Qt: ";
        cin >> Qrice;
        cout << greaterThan << "Beans   Qt: ";
        cin >> Qbeans;
        cout << greaterThan << "Chicken Qt: ";
        cin >> Qchicken;
        cout << greaterThan << "Noodles Qt: ";
        cin >> Qnoodles;
        cout << greaterThan << "Beef    Qt: ";
        cin >> Qbeef;
    }
// --------------<< funcion adding available hotel rooms >>------------
    void addHotelRooms() {
        system("cls");
        cout << endl << endl;
        cout << longDashLesft << "Hotel roomS" << longDashRight << endl;
        cout << shortDashLesft << "Please enter the number rooms available." << endl;
        cout << greaterThan << "Number of executive rooms: ";
        cin >> executiveRooms;
        cout << greaterThan << "Number of normal rooms:    ";
        cin >> rooms;
    }
// ---------------<< function that prints daily records >>----------------------
        void salesFormation() {
        cout << endl << endl;
        cout << longDashLesft << "     HERITAGE HOTEL     " << longDashRight << endl;
        cout << shortDashLesft << "Information rgarding to sales and collections." << shortDashRight << endl;
        cout << endl;
        cout << greaterThan << "Sales in details." << endl;
        cout << longQualTo << endl;
        fstream myFile;
        /*      myFile.open("heritage hotel.txt", ios::out);
              if (myFile.is_open()) {
                  myFile << "Information about heritagr hotel sales";
                  myFile.close();
              }*/

        myFile.open("heritage hotel.txt", ios::in); // ---------<< File handle for output record
        if (myFile.is_open()) {
            string line;
            while (getline(myFile, line)) {
                cout << line << endl;
            }
            myFile.close();
        }
            cerr << ">>      Error in opening file !! << endl;
        cout << longQualTo << endl << endl;
        cout << endl;
        cout << ">>  Exit with any number: ";
        int number;
        cin >> number;
    }
//--------------<< this function is t display quantity of items available >>------------------
    void checkQuantity() {
        system("cls");
        cout << endl << endl;
        cout << longDashLesft << "  HERITAGE HOTEL  " << longDashRight << endl;
        cout << longDashLesft << "Quantities of items and collections" << lessThan << endl;
        cout << "   Food items" << "                       " << "Hotel rooms" << endl << endl;
        cout << " Rice:    " << Qrice << "                 " << "Executive rooms: " << executiveRooms << endl;
        cout << " Beans:   " << Qbeans << "                " << "normal rooms:    " << rooms << endl;
        cout << " Chicken: " << Qchicken << endl;
        cout << " Noodles: " << Qnoodles << endl;
        cout << " Beef:    " << Qbeef << endl;
        cout << longQualTo << endl << endl;
    }
//----------------------<< this function displays the price of each item >>--------------------------
    void showPrice() {
        system("cls");
        cout << endl << endl;
        cout << longDashLesft << "            HERITAGE HOTEL             " << longDashRight << endl;
        cout << longDashLesft << "PRICE LIST OF ALL COLLECTIONS AND ITEMS" << longDashRight << endl;
        cout << longStars << endl;
        cout << "    FOOD ITEMS." << "                       " << "    HOTEL ROOM." << endl << endl;
        cout << " 1. Rice    $" << price_rice << dortLine << " Executive rooms  $" << price_eRooms << endl;
        cout << " 2. Beans   $" << price_beans << dortLine << " Normal rooms     $" << price_nRoom << endl;
        cout << " 3. Chicken $" << price_chicken << endl;
        cout << " 4. Noodles $" << price_noodles << endl;
        cout << " 5. Beef    $" << price_beef << endl;
        cout << longStars << endl << endl;
        cout << greaterThan << " Back to MENU enter any number: ";
        int number;
        cin >> number;

    }

//--------------------------<< the function for adding price to the menu >>------------------------------
    void priceTag() {
        system("cls");
        cout << endl << endl;
        cout << shortDashLesft << "Please enter th price of your food." << endl;
        cout << "Price for rice:        $";
        cin >> price_rice;
        cout << "Price for beans:       $";
        cin >> price_beans;
        cout << "Price for chicken:     $";
        cin >> price_chicken;
        cout << "Price for beef:        $";
        cin >> price_beef;
        cout << "Price for noodles:     $";
        cin >> price_noodles;
        system("cls");
        cout << endl << endl;
        cout << shortDashLesft << "Room section" << shortDashRight << endl;
        cout << greaterThan << "Price for executive rooms: $";
        cin >> price_eRooms;
        cout << greaterThan << "Price for normal rooms:    $";
        cin >> price_nRoom;
    }

// -----------------------<< A simple business calculator function >>--------------------
    void calculator() {
        system("clr");
        cout << endl << endl;
        cout << longDashLesft << "  HERITAGE HOTEL  " << longDashRight << endl;
        cout << longDashLesft << "DUSINESS CALCULATOR" << longDashRight << endl;
        cout << shortDashLesft << "Pls enter amount." << endl;
        cout << greaterThan << "To exit press 0." << endl;

        bool done = false;
        while (!done) {
            int number, firstNumber, secondNumber; char operation;
            cout << " first amount  $";
            cin >> firstNumber;
            cout << " Operator      :";
            cin >> operation;
            cout << " second amount $";
            cin >> secondNumber;

            switch (operation)
            {
            case '+': cout << firstNumber << " " << operation << " " << secondNumber << " = $" << firstNumber + secondNumber << endl; break;
            case '-': cout << firstNumber << " " << operation << " " << secondNumber << " = $" << firstNumber - secondNumber << endl; break;
            case '*': cout << firstNumber << " " << operation << " " << secondNumber << " = $" << firstNumber * secondNumber << endl; break;
            case '/': cout << firstNumber << " " << operation << " " << secondNumber << " = $" << firstNumber / secondNumber << endl; break;
                cout << endl;
            default: cout << " ***********> Invalid operation..!! <*********** " << endl;
                break;
            }
            cout << endl;
            cout << greaterThan << " if you not done press any number accept 0 :";
            cin >> number;
            cout << endl;
            if (number == 0) {
                return;
            }
        }



    }
//-------------------------------<< function for the main menu >>---------------------------------------
    void displayMenu() {
        system("cls");
        cout << endl << endl;
        cout << longDashLesft << "     HERITAGE HOTEL     " << longDashRight << endl;
        cout << longDashLesft << "       SHOW MENU        " << longDashRight << endl;
        cout << endl;
        cout << " Please choose number option!" << endl;
        cout << longStars << endl;
        cout << endl;
        cout << "   1." << lessThan << " Make order.      " << "    *    " << "Add rooms.   " << greaterThan << " .2" << endl;
        cout << "   3." << lessThan << " Add records.     " << "    *    " << "Add food.    " << greaterThan << " .4" << endl;
        cout << "   5." << lessThan << " check quantity.  " << "    *    " << "Add prices.  " << greaterThan << " .6" << endl;
        cout << "   7." << lessThan << " Sales infor.     " << "    *    " << "Show prices. " << greaterThan << " .8" << endl;
        cout << "   9." << lessThan << " Calculator.      " << "    *    " << "Exit.        " << greaterThan << " .0" << endl;
        cout << endl;
        cout << longStars << endl;
        cout << endl;
        cout << " Option: ";





    }
//-----------------------------------<< function for displaying quantity of items after sales have bee made >>---------------------------
    void availableItemsAndCollections() {
        system("cls");
        cout << endl << endl;
        /*    Qrice -= demand1;
            Qbeans -= demand2;
            Qchicken -= demand3;
            Qnoodles -= demand4;
            Qbeef -= demand5;*/
        cout << longDashLesft << "  HERITAGE HOTEL  " << longDashRight << endl;
        cout << longDashLesft << "Quantity of available items and collections" << lessThan << endl;
        cout << "   Food items" << "                       " << "Hotel rooms" << endl << endl;
        cout << " Rice:    " << Qrice << "        " << "Executive rooms: " << executiveRooms - demand6 << endl;
        cout << " Beans:   " << Qbeans << "        " << "normal rooms:    " << rooms - demand7 << endl;
        cout << " Chicken: " << Qchicken << endl;
        cout << " Noodles: " << Qnoodles << endl;
        cout << " Beef:    " << Qbeef << endl;
        cout << longQualTo << endl << endl;
        cout << greaterThan << " To go back enter any number: ";
        int number;
        cin >> number;
    }

//--------------------------------------<< function for recording businass per each sales >>---------------------------
    void businessRecord() {

        ofstream outputFile; //-------------<< file handle for input record 

        outputFile.open("heritage hotel.txt", ios::app); 

        if (!outputFile) {

            cout << "Error opening the file!" << endl;
            return;
        }
        string name, roomAlocation, customersRequest, contact, space;
        cout << endl;
        cout << "-->> Enter the customer's details;" << endl;
        cout << endl << endl;
        getline(cin, space);
        cout << "..Pls enter customers full name:            ";
        getline(cin, name);
        cout << "..Pls enter customers room aloated:         ";
        getline(cin, roomAlocation);
        cout << "..Pls enter customers contact:              ";
        getline(cin, contact);
        cout << "..Enter the customer's request and prices:  ";
        getline(cin, customersRequest);
        cout << endl;
        cout << longStars << endl;
        cout << endl;
        outputFile << "Name:               " << name << endl;
        outputFile << "Alocated room:      " << roomAlocation << endl;
        outputFile << "Contact:            " << contact << endl;
        outputFile << "Customer's request: " << customersRequest << endl;

        outputFile.close();

        cout << "Information has been written to the file." << endl;



    }
//-------------------------<< function for placing order >>---------------------------------------
    void booking() {
        system("cls");
        cout << endl;
        cout << shortDashLesft << " Which of the option do you want book from? " << endl;
        cout << "     1.  Order for food.        " << lessThan << endl;
        cout << "     2.  Book hotel rooms.      " << lessThan << endl;
        cout << "     3.  Exit.                  " << lessThan << endl;
        cout << endl;
        cout << "Plese enter option: ";
        int choice;
        choice = validate();

        switch (choice)
        {
        case 1:
            system("cls");
            cout << endl << endl;
            cout << shortDashLesft << " Selection from the option given." << endl;
            cout << "    1.  Rice     $" << price_rice << endl;
            cout << "    2.  Beans    $" << price_beans << endl;
            cout << "    3.  Chicken  $" << price_chicken << endl;
            cout << "    4.  Noodles  $" << price_noodles << endl;
            cout << "    5.  Beef     $" << price_beef << endl;
            cout << endl;
            cout << greaterThan << " Pls enter number: ";
            cin >> choice;
            switch (choice) {

            case 1:
                cout << greaterThan << "        How many plate of rice do you want? " << endl;
                cout << longQualTo << endl << endl;
                cout << "  Number of plates: ";
                int number;
                cin >> demand1;
                if (Qrice == 2) {
                    cout << endl;
                    cout << shortStars << "You have " << Qrice << " plate of rice left." << endl;
                    cout << " Please bring more rice to the store..!!" << shortStars << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                if (demand1 > Qrice) {
                    cout << endl;
                    cout << longDashLesft << "    !! We only have " << Qrice << " Plates available. " << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                else
                {
                    Qrice -= demand1;
                    cout << endl;
                    cout << lessThan << " Ok! in few minutes the food will be served." << greaterThan << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                cin >> number;
                if (number != number)
                    cout << endl << endl;
                return;
                break;
            case 2:
                cout << greaterThan << "        How many plate of beans do you want? " << endl;
                cout << longQualTo << endl << endl;
                cout << "  Number of plates: ";
                cin >> demand2;
                if (Qbeans == 2) {
                    cout << endl;
                    cout << shortStars << "You have " << Qbeans << " plate of beans left." << endl;
                    cout << " Please bring more beans to the store..!!" << shortStars << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                if (demand2 > Qbeans) {
                    cout << endl;
                    cout << longDashLesft << "    !! We only have " << Qbeans << " Plates available. " << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                else
                {
                    Qbeans -= demand2;
                    cout << endl;
                    cout << lessThan << " Ok! in few minutes the food will be served." << greaterThan << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                cin >> number;
                if (number != number)
                    cout << endl << endl;
                return;
                break;
            case 3:
                cout << greaterThan << "        How many plate of chicken do you want? " << endl;
                cout << longQualTo << endl << endl;
                cout << "  Number of plates: ";
                cin >> demand3;
                if (Qchicken == 2) {
                    cout << endl;
                    cout << shortStars << "You have " << Qchicken << " plate of chicken left." << endl;
                    cout << " Please bring more chicken to the store..!!" << shortStars << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                if (demand3 > Qchicken) {
                    cout << endl;
                    cout << longDashLesft << "    !! We only have " << Qchicken << " Plates available. " << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                else
                {
                    Qchicken -= demand3;
                    cout << endl;
                    cout << lessThan << " Ok! in few minutes the food will be served." << greaterThan << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                cin >> number;
                if (number != number)
                    cout << endl << endl;
                return;
                break;
            case 4:
                cout << greaterThan << "        How many plate of noodles do you want? " << endl;
                cout << longQualTo << endl << endl;
                cout << "  Number of plates: ";
                cin >> demand4;
                if (Qnoodles == 2) {
                    cout << endl;
                    cout << shortStars << "You have " << Qnoodles << " plate of noodles left." << endl;
                    cout << " Please bring more rice to the store..!!" << shortStars << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                if (demand4 > Qnoodles) {
                    cout << endl;
                    cout << longDashLesft << "    !! We only have " << Qnoodles << " Plates available. " << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                else
                {
                    Qnoodles -= demand4;
                    cout << endl;
                    cout << lessThan << " Ok! in two minutes the food will be served." << greaterThan << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                cin >> number;
                if (number != number)
                    cout << endl << endl;
                return;
                break;
            case 5:
                cout << greaterThan << "        How many plate of beef do you want? " << endl;
                cout << longQualTo << endl << endl;
                cout << "  Number of plates: ";
                cin >> demand5;
                if (Qbeef == 2) {
                    cout << endl;
                    cout << shortStars << "You have " << Qbeef << " plate of beef left." << endl;
                    cout << " Please bring more rice to the store..!!" << shortStars << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                if (demand5 > Qbeef) {
                    cout << endl;
                    cout << longDashLesft << "    !! We only have " << Qbeef << " Plates available. " << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                else
                {
                    Qbeef -= demand5;
                    cout << endl;
                    cout << lessThan << " Ok! in two minutes the food will be served." << greaterThan << endl << endl;
                    cout << " To go back to the menu enter any number :";
                }
                cin >> number;
                if (number != number)
                    cout << endl;
                return;
                break;
            default:
                cout << "    ************ Invalid operation.!! ************ " << endl;
                break;
            }
        case 2:

            system("cls");
            cout << endl << endl;
            cout << shortDashLesft << " Selection from the option given." << endl;
            cout << "    1.  Book normal rooms        $" << price_nRoom << lessThan << endl;
            cout << "    2.  Book executive rooms     $" << price_eRooms << lessThan << endl;
            cout << "    3.  Exit                      " << price_eRooms << lessThan << endl;
            cout << endl;
            cout << greaterThan << " Pls enter number: ";
            choice = validate();

            switch (choice) {

            case 1:
                cout << endl;
                cout << greaterThan << "        How many rooms do you want? " << endl;
                cout << longQualTo << endl << endl;
                cout << "  Number of rooms: ";
                int demand6, number;
                cin >> demand6;
                if (rooms == 2) {
                    cout << endl;
                    cout << shortStars << "You have " << rooms << " rooms left.";
                    cout << endl << endl;
                    cout << " To go back to the menu enter any number : ";
                }
                if (demand6 > rooms) {
                    cout << endl;
                    cout << longDashLesft << "    !! We only have " << rooms << " Plates available. " << endl << endl;
                    cout << " To go back to the menu enter any number : ";
                }
                else
                {
                    rooms -= demand6;
                    cout << endl;
                    cout << lessThan << " Access guaranteed.!! " << greaterThan << endl << endl;
                    cout << " To go back to the menu enter any number : ";
                }
                cin >> number;
                if (number != number)
                    cout << endl << endl;
                break;
                return;
            case 2:
                cout << endl;
                cout << greaterThan << "        How many executive rooms do you want alocate? " << endl;
                cout << longQualTo << endl << endl;
                cout << "  Number of rooms: ";
                cin >> demand7;
                if (executiveRooms == 2) {
                    cout << endl;
                    cout << shortStars << "You have " << executiveRooms << " executive rooms left.";
                    cout << endl << endl;
                    cout << " To go back to the menu enter any number : ";
                }
                if (demand7 > executiveRooms) {
                    cout << endl;
                    cout << longDashLesft << "    !! We only have " << executiveRooms << " number of executive rooms available. " << endl << endl;
                    cout << " To go back to the menu enter any number : ";
                }
                else
                {
                    executiveRooms -= demand7;
                    cout << endl;
                    cout << lessThan << " Access guaranteed.!! " << greaterThan << endl << endl;
                    cout << " To go back to the menu enter any number : ";
                }
                cin >> number;
                if (number != number)
                    cout << endl << endl;
                return;
                break;
            default:
                cout << "    ************ Invalid operation.!! ************ " << endl;
                break;







            }





        }



    }
};



int main()
{
    hetelManagement data;
    int quit;
    int number;
    int choice;
    int done = false;

    while (!done) {
        data.displayMenu();
        choice = data.validate();
        switch (choice) {
        case 1:
            data.booking();
            break;
        case 2:
            data.addHotelRooms();
            break;
        case 3:
            data.businessRecord();
            break;
        case 4:
            data.addFoodItems();
            break;
        case 5:
            data.checkQuantity();
            data.availableItemsAndCollections();
            break;
        case 6:
            data.priceTag();
            data.showPrice();
            break;
        case 7:
            data.salesFormation();
            break;
        case 8:
            data.showPrice();
            break;
        case 9:
            data.calculator();
            break;

        case 0:

            cout << longQualTo << endl;
            cout << shortDashLesft << "      ?? Do you want to exit..! " << endl;
            cout << greaterThan << " If YES enter '1'        If NO enter any other number, " << endl;
            cout << longQualTo << endl;

            cin >> quit;
            switch (quit)
            {
            case 1:
                cout << "       EXITING....!! " << endl;
                done = true;
            default:
                break;
            }
            break;
        default:
            cout << "  ******* Invalid choice. Please try again." << endl;
            cout << "> Enter any value to continue: ";
            int number;
            cin >> number;
            break;
        }
    }



    system("pause > 0");
}

