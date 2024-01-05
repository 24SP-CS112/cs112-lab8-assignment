/* QueueException.h models exceptions in queue operations.
 */

#ifndef QUEUE_EXCEPTION_H
#define QUEUE_EXCEPTION_H

#include <iostream>
using namespace std;

class QueueException {
public:
    QueueException(const string& whereThrown, const string& message) {
        myLocation = whereThrown;
        myMessage = message;
    }

    string asString() const {
        return "*** QueueException in " + myLocation + ": " + myMessage;
    }

private:
    string myLocation;
    string myMessage;
};

/* Function to allow a QueueException (or a subclass) to be displayed
 * via an ostream.
 * Parameters: out, an ostream;
 *             se, a QueueException.
 */
inline ostream& operator<<(ostream& out, const QueueException& se) {
    out << se.asString();
    return out;
}

#endif
