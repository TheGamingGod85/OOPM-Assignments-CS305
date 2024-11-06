#include <iostream>
using namespace std;

// Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Insertion Sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Merge Sort (Helper Function)
void merge(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge(arr, left, mid);
        merge(arr, mid + 1, right);

        // Merging two halves
        int n1 = mid - left + 1;
        int n2 = right - mid;

        int leftArr[n1], rightArr[n2];
        for (int i = 0; i < n1; i++) leftArr[i] = arr[left + i];
        for (int i = 0; i < n2; i++) rightArr[i] = arr[mid + 1 + i];

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (leftArr[i] <= rightArr[j]) {
                arr[k++] = leftArr[i++];
            } else {
                arr[k++] = rightArr[j++];
            }
        }
        while (i < n1) arr[k++] = leftArr[i++];
        while (j < n2) arr[k++] = rightArr[j++];
    }
}

// Quick Sort (Helper Function)
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Linear Search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Binary Search
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

// Insert at any position
void insertAtPos(int pos, int value, int arr[], int &size) {
    if (size >= 10 || pos < 0 || pos > size) {
        cout << "Insertion not possible." << endl;
        return;
    }

    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    size++;
}

// Delete at any position
void deleteAtPos(int pos, int arr[], int &size) {
    if (pos < 0 || pos >= size) {
        cout << "Deletion not possible." << endl;
        return;
    }

    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

// Print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Display original array
    cout << "Original array: ";
    printArray(arr, size);

    // Sorting Algorithms
    cout << "Bubble Sort:" << endl;
    bubbleSort(arr, size);
    printArray(arr, size);

    cout << "Selection Sort:" << endl;
    selectionSort(arr, size);
    printArray(arr, size);

    cout << "Insertion Sort:" << endl;
    insertionSort(arr, size);
    printArray(arr, size);

    cout << "Merge Sort:" << endl;
    merge(arr, 0, size - 1);
    printArray(arr, size);

    cout << "Quick Sort:" << endl;
    quickSort(arr, 0, size - 1);
    printArray(arr, size);

    // Searching Algorithms
    int target;
    cout << "Enter the target element for search: ";
    cin >> target;

    int result = linearSearch(arr, size, target);
    cout << "Linear Search: Element " << target << " found at index " << result << endl;

    result = binarySearch(arr, size, target);
    cout << "Binary Search: Element " << target << " found at index " << result << endl;

    // Insertion and Deletion operations
    int pos, value;
    cout << "Enter position and value to insert at position: ";
    cin >> pos >> value;
    insertAtPos(pos, value, arr, size);
    cout << "After insertion: ";
    printArray(arr, size);

    cout << "Enter position to delete from: ";
    cin >> pos;
    deleteAtPos(pos, arr, size);
    cout << "After deletion: ";
    printArray(arr, size);

    return 0;
}
