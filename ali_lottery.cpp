#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main (int argc, char * const argv[]) {
 
int numberCount;
int maxNumbers;
 
cout << "Lottery Game" << endl << "=================================" << endl;
cout << "How many Lottery Numbers = ";
cin >> numberCount;
cout << "from 1 to ? ";
cin >> maxNumbers;
cout << "You have chosen " << numberCount << " Lottery Numbers from 1 to " << maxNumbers << endl;

int i, 
thread myThreads1[55];
thread myThreads2[55];
thread myThreads3[55];

for(i=0; i < 55 ; i++) {

myThreads1[i] = thread(lotto_1, i);
myThreads1[i] = thread(lotto_2, i);
myThreads1[i] = thread(lotto_3, i);
}
cout << "1st Price Lottery: ";
ready1 = true;
this_thread: :sleep_for(chrono::seconds(1));

cout << "2nd Price Lottery: ";
ready2 = true;
this_thread: :sleep_for(chrono::seconds(1));

cout << "3rd Price Lottery: ";
ready3 = true;
this_thread: :sleep_for(chrono::seconds(1));

for(i = 0; i < 55; i++) {
mythreads1[i].join();
mythreads2[i].join();
mythreads3[i].join();
}
return 0;
}
