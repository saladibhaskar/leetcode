class Solution {
public:
void merge(vector<int>& arr, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Create temporary vectors to hold the subarrays
    vector<int> left(n1), right(n2);

    // Copy data to the temporary vectors
    for (int i = 0; i < n1; ++i)
        left[i] = arr[low + i];
    for (int j = 0; j < n2; ++j)
        right[j] = arr[mid + 1 + j];

    // Merge the temporary vectors back into arr[low..high]
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if any
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Function to implement merge sort
void merge_sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        // Recursively sort the first and second halves
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);

        // Merge the sorted halves
        merge(arr, low, mid, high);
    }
}
  
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums,0,nums.size()-1);
        return nums;
    }
};