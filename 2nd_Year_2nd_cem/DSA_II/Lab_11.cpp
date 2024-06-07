#include <iostream>
#include <vector>

using namespace std;

void firstFit(const vector<int>& items, int binCapacity) {
    vector<int> bins;

    for (int i = 0; i < items.size(); ++i) {
        bool packed = false;
        // Try to pack the current item into existing bins
        for (int j = 0; j < bins.size(); ++j) {
            if (bins[j] + items[i] <= binCapacity) {
                bins[j] += items[i];
                packed = true;
                break;
            }
        }
        // If the item couldn't be packed into any existing bin, create a new bin
        if (!packed) {
            bins.push_back(items[i]);
        }
    }

    // Print the packing result
    cout << "Number of bins required: " << bins.size() << endl;
    for (int i = 0; i < bins.size(); ++i) {
        cout << "Bin " << i + 1 << ": " << bins[i] << endl;
    }
}

int main() {
    // Example usage
    vector<int> items = {4, 8, 1, 2, 5, 3};
    int binCapacity = 10;

    cout << "Items to be packed: ";
    for (int i = 0; i < items.size(); ++i) {
        cout << items[i] << " ";
    }
    cout << endl;

    cout << "Bin capacity: " << binCapacity << endl;

    firstFit(items, binCapacity);

    return 0;
}
