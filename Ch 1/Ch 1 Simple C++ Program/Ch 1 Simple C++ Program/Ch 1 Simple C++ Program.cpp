#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item total;
    bool processing = true;
    bool processingTrans = true;
    char anyBooks;

    /*string totalIsbn, transIsbn;
    int totalCopies, transCopies;
    double totalRevenue, transRevenue;
    */

    if (processing == true) {
        Sales_item trans;

        while (processingTrans == true) {

            cout << "Are there any more books?" << endl;
            cin >> anyBooks;
                
            if (anyBooks == 'y') {
                cout << "Please enter the total ISBN, copies and revenue" << endl;
                cin >> total.isbn;
                cin >> total.copies;
                cin >> total.revenue;

                cout << "Please enter the trans ISBN, copies and revenue" << endl;
                cin >> trans.isbn;
                cin >> trans.copies;
                cin >> trans.revenue;
            }
            else {
                processingTrans = false;
                processing = false;
                break;
            }
            

            if (total.isbn == trans.isbn) {
                total.copies += trans.copies;
                total.revenue += trans.revenue;
            }
            else {
                cout << total.isbn << total.copies << total.revenue << endl;
                total = trans;
            }
        }

        cout << total.isbn << total.copies << total.revenue << endl;
    }
    else {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}
