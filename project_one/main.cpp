#include<iostream>

using namespace std;

long long int* bubblesort(long long int arr[], int num_of_elements) {
    for(int i=1; i<=num_of_elements-1; i++) {
        for(int j=num_of_elements-1; j>=i; j--) {
            if(arr[j] < arr[j-1]) {
                long long int prev_j_value = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = prev_j_value;
            }
        }
    }
    return arr;
}

void print_array(long long int arr[], int num_of_elements) {
    for (int i=0; i<num_of_elements; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int num_of_elements;
    cin >> num_of_elements;

    long long int array[num_of_elements];
    for (int index=0; index<num_of_elements; index++) {
        cin >> array[index];
    }

    long long int* sorted_array = bubblesort(array, num_of_elements);
    print_array(sorted_array, num_of_elements);

    return 0;
}