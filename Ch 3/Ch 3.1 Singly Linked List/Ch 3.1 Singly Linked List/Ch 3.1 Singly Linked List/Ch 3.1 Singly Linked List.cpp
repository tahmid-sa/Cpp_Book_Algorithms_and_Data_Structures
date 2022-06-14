#include <iostream>
#include "intSLList.h"

using namespace std;

int main()
{
    IntSLList list;

    list.addToHead(5);
    list.addToTail(4);
    list.addToHead(3);

    for (IntSLLNode* node = list.head; node != list.tail->next; node = node->next) {
        cout << node->info << endl;
    }

    //Catching the try from the deleteFromHead function
    /*
    try {
        n = list.deleteFromHead();
        //do something with n
    }
    catch (char* s) {
        cerr << "Error: " << s << endl;
    }
    */

    //Deleting from head after checking if the linked llist is not empty
    /*
    if (!list.isEmpty()) {
        n = list.deleteFromHead();
    }
    */

    return 0;
}