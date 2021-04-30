#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  vector<string> shoppingList;
  string choice = "";
  int stop = 0;
  int j = 0;
  while (stop != 1) {
    cout << "Please add an item to the shopping list. Type end/END when finished" << endl;
    cin >> choice;
    if (choice == "end" || choice == "END") {
      stop = 1;
      break;
    }
    shoppingList.push_back(choice);
    j++;

  }
  cout << "Sorting . . . " << endl;
  sort(shoppingList.begin(), shoppingList.end());
  for (int i = 0; i < j; i++) {
    cout << shoppingList.at(i) << " " << endl;
  }

  return 0;
}