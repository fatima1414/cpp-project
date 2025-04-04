#include <iostream>
using namespace std;


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}


void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int L[n1], R[n2];
    
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}


void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}


int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}


int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}


void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int choice, n;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Selection Sort\n";
        cout << "2. Merge Sort\n";
        cout << "3. Linear Search\n";
        cout << "4. Binary Search (Requires Sorted Array)\n";
        cout << "5. Display Array\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            selectionSort(arr, n);
            cout << "Array after Selection Sort: ";
            displayArray(arr, n);
        } 
        else if (choice == 2) {
            mergeSort(arr, 0, n - 1);
            cout << "Array after Merge Sort: ";
            displayArray(arr, n);
        } 
        else if (choice == 3) {
            int key;
            cout << "Enter element to search: ";
            cin >> key;
            int result = linearSearch(arr, n, key);
            if (result != -1) cout << "Element found at index " << result << endl;
            else cout << "Element not found.\n";
        } 
        else if (choice == 4) {
            int key;
            cout << "Enter element to search: ";
            cin >> key;
            int result = binarySearch(arr, 0, n - 1, key);
            if (result != -1) cout << "Element found at index " << result << endl;
            else cout << "Element not found.\n";
        } 
        else if (choice == 5) {
            cout << "Current Array: ";
            displayArray(arr, n);
        } 
        else if (choice == 6) {
            cout << "Exiting program...\n";
            break;
        } 
        else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}