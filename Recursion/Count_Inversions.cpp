int merge(int arr[], int temp[], int low, int mid, int high) {
    int count = 0;
    int i = low;       // St idx for left subarray
    int j = mid + 1;   // St idx for right subarray
    int k = low;       // St idx to store merged result

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++]; 
            count += (mid - i + 1);  // Cnt inv
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    while (j <= high) {
        temp[k++] = arr[j++];
    }

    for (int l = low; l <= high; l++) {
        arr[l] = temp[l];
    }

    return count;
}

int mergesort(int arr[], int temp[], int low, int high) {
    if (low >= high) {
        return 0;
    }

    int mid = low + (high - low) / 2;
    int count = 0;

    count += mergesort(arr, temp, low, mid);
    count += mergesort(arr, temp, mid + 1, high);
    count += merge(arr, temp, low, mid, high);

    return count;
}

int countInversions(int arr[], int n) {
    int* temp = new int[n];  // Temporary array for merging
    int count = mergesort(arr, temp, 0, n - 1);
    delete[] temp;           // Clean up allocated memory
    return count;
}
